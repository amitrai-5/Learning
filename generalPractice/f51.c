// C code to find 
// duplicates in O(n) time 
#include <stdio.h> 
#include <stdlib.h> 

// Function to print duplicates 
int printRepeating(int arr[], int size) 
{ 
int i;
int ret = 0; 
printf("The repeating elements are: \n"); 
for (i = 0; i < size; i++) 
{ 
   if (arr[abs(arr[i])] >= 0) 
   {
   arr[abs(arr[i])] = -arr[abs(arr[i])]; 
   ret = 0;
   }
   else
   {
   printf(" %d ", abs(arr[i])); 
   ret = 1;
   }
}
   return ret; 
} 

int main() 
{ 
int arr[] = {1, 2, 3, 4, 5, 6,7}; 
int arr_size = sizeof(arr)/sizeof(arr[0]); 
int rep = printRepeating(arr, arr_size);
   printf("AR:%d\n", (arr_size%2));
   if(arr_size%2)
   printf("Lala");
   printf("Rep is:%d\n", rep);
getchar(); 
return 0; 
} 

