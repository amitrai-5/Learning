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

pkt_t *head = NULL;
/*                
 *                 * Called once for every packet fragment. Gather the fragments here.
 *                  */                                                                
void recvPkt(pkt_t *pkt) {                                          
    pkt_t *tmp = (pkt_t *)malloc(sizeof(pkt_t));                    
    pkt_t *current = NULL;                                          
    tmp = pkt;                                                      
   if(head == NULL) {                                              
      tmp->next = NULL;                                            
      head = tmp;                                                  
   }                                                                
   if (pkt->hdr.FO < head->hdr.FO){                                
        tmp->next = head;                                          
        head = tmp;                                                
   }else {                                                          
       current = head;                                              
       while(current->next && current->next->hdr.FO < pkt->hdr.FO ){
        current= current->next;                                    
       }                                                            
       if(current->next == NULL) {                                          
          tmp->next = NULL;                                        
          current->next = tmp;                                      
       } else {                                                    
          tmp->next = current->next;                                
          current->next = tmp;                                      
       }                                                            
   }                                                                
   return;                                                          
}                                                                  

/*
 *  * Called after receiving all fragments. Return a pointer to the defragmented
 *   * packet.                                                                  
 *    */                                                                          
pkt_t *deFragment(void) {                                                    
    pkt_t *tmp = head;                                                      
    pkt_t *pkt = (pkt_t *)malloc(sizeof(pkt_t));                            
    char *payload;                                                          
    pkt->hdr.MF = 0;                                                        
    pkt->hdr.FO = 0;                                                        
    pkt->hdr.len = 0;                                                        

    while (tmp){
        pkt->hdr.len += tmp->hdr.len;
        memcpy(payload, tmp->payload, tmp->hdr.len);
        payload += tmp->hdr.len;                    
        tmp = tmp->next;                            
    }                                              
    memcpy(pkt->payload, payload, pkt->hdr.len);    
    return pkt;
}

int main() {
    FILE *f = fopen(getenv("OUTPUT_PATH"), "w");

    char line[80], payload[80];
    int numFragments=0;
    int MF, FO, len;
    pkt_t *pkt;
    pkt_t *defragPkt;
    int i;

    printf("Enter no of Fragments\n");
    scanf("%d", &numFragments);

    for(i =0; i < numFragments; i++) {
       printf("Enter MF, FO, len, payload\n");
       scanf("%d %d %d %s\n", &MF, &FO, &len, payload);
       pkt = malloc(sizeof(pkt_t));
       if(!pkt)
           break;
       pkt->hdr.MF= MF;
       pkt->hdr.FO= FO;
       pkt->hdr.len = len;
       memcpy(pkt->payload, payload, len);
       printf("Call to recvPkt\n");
       recvPkt(pkt);
    }

    defragPkt = deFragment();
    defragPkt->payload[defragPkt->hdr.len]='\0';
    fprintf(f, "%s\n", defragPkt->payload);
    printf("%s\n", defragPkt->payload);
    fclose(f);
    return 0;
}

