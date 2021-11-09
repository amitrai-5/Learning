#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hdr_ { 
   int MF; /* more fragments */
   int FO; /* fragment offset */
   int len;
} hdr_t;

typedef struct pkt_ { /* Holds a packet or packet fragment */
   hdr_t hdr;
   char payload[500];
   struct pkt_ *next;
} pkt_t;

pkt_t *head;

void printPkt()
{
   pkt_t *tmp = head;
   if(tmp == NULL)
   {
      printf("Empty Pkt\n");
      return;
   }
   while(tmp != NULL)
   {
      printf("%s\n", tmp->payload);
      tmp = tmp->next;
   }   
}
/*
 *  * Called once for every packet fragment. Gather the fragments here.
 *   */
void recvPkt(pkt_t *pkt) {
   pkt_t *tmp = head;
   if(tmp == NULL)
   {
      head = pkt;
   }
   else
   {
      while(tmp->next != NULL)
      {
         tmp = tmp->next;
      }
      tmp->next = pkt;
   }
}

/* 
 *  * Called after receiving all fragments. Return a pointer to the defragmented
 *   * packet.
 *    */  
pkt_t *deFragment(void) {
   pkt_t *tmp = head;
   if(tmp == NULL)
   {
      printf("Empty pkt list\n");
      return tmp;
   }
   else
   {
      static pkt_t *tempArr;
      while(tmp != NULL)
      {
         tempArr = (pkt_t*) realloc(tempArr, sizeof(tmp));
         tempArr->hdr.len += tmp->hdr.len;
         strcat(tempArr->payload, tmp->payload);
         tmp = tmp->next;
      }
      return tempArr;
   }
}

int main() {
 //   FILE *f = fopen(getenv("OUTPUT_PATH"), "w");
    
    char line[80], payload[80];
    int numFragments=0;
    int MF, FO, len;
    pkt_t *pkt;
    pkt_t *defragPkt;
    int i;

    printf("Enter number of packets:");
    scanf("%d", &numFragments);
    
    for(i =0; i < numFragments; i++) {
       printf("Enter the fields MF, FO, Len, Payload:\n");
       scanf("%d %d %d %s", &MF, &FO, &len, payload);
       pkt = malloc(sizeof(pkt_t));
       if(!pkt) 
           break;
       pkt->hdr.MF= MF;
       pkt->hdr.FO= FO;
       pkt->hdr.len = len;
       memcpy(pkt->payload, payload, len);
       recvPkt(pkt);
    }

    printPkt();
    defragPkt = deFragment();
    defragPkt->payload[defragPkt->hdr.len]='\0';
    printf("%s\n", defragPkt->payload);
//    fprintf(f, "%s\n", defragPkt->payload);
 
   free(pkt);
//    fclose(f);
    return 0;
}
