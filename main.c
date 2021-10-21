 #include<stdio.h>
 #include"array.h"

 int main() {
   int * arrPtr = NULL;
   
   showIdentity();
   arrPtr = createArray();
   scanArray(arrPtr);
   printArray(arrPtr);
   reverseArray(arrPtr);
   printArray(arrPtr);
   return 0; 
 }
