 #include"array.h"

 int sizeRequested = 0;

 void scanfPlusPlus(int * elementAddress) {
    scanf("%d",elementAddress);                // Take integer from standard input
    while ((getchar()) != '\n');               // Flush the standard input buffer
 }

 void printfPlusPlus(char * printMessage) {
    printf(printMessage);                      // Print Message to  standard output
    printf("\n");                              // Change to new line
 }

 void showIdentity() {
    /* Print info about itself */
    printfPlusPlus("Hey there, I am an Instance of Array Data Structure !");
    printfPlusPlus("Happy Usage !");
 }
 
 int * createArray() {
    static int arr[ARRAY_SIZE];                // Create Static Array
    return arr;                                // Pass the Address of this Array
 }

 void scanArray(int * arrPtr) {
    int requestCount = 0;                      // Counter to check for alloted trials

    printf("Array Size is %d\n",ARRAY_SIZE);   // Give user info about array size

    /* Ask for size , If it is valid then go ahead otherwise give him a next try*/
    do {
       if(requestCount == 3) {                         // 3rd wrong trial
          printfPlusPlus("Sorry, Try Again...");
          sizeRequested = 0;                           // Re initialize the count           
          return;                                      // Return to caller
       }

       requestCount++;                                 // keep note of failed trial
       printf("%d :: How many elements you want to fill : ",requestCount);
       scanfPlusPlus(&sizeRequested);
    }while(!(sizeRequested >= 1 && sizeRequested <= 10));  

    printf("Fill Array : ");                           
    for(int i=0; i<sizeRequested; i++) {                // Scan array element's
       scanf("%d",arrPtr+i);
    }
 }

 void printArray(int * arrPtr) {
    /* Print whole array to standard output */
    printf("Array ----> [ ");
    for(int i=0; i<ARRAY_SIZE; i++) {                   // Print array element's
       printf("%d ",*(arrPtr+i));
    }
    printf("]");
    printf("\n");
 }

 void reverseArray(int * arrPtr) {
    int arraySize = sizeRequested ? sizeRequested : ARRAY_SIZE;
    for(int i=0; i<arraySize/2; i++) {
       /* If mirror elements are not equal , swap them */
       if(arrPtr[i] != arrPtr[arraySize-i-1]) {                       
          arrPtr[i] = arrPtr[i] + arrPtr[arraySize-i-1];                 // Swapping
          arrPtr[arraySize-i-1] = arrPtr[i] - arrPtr[arraySize-i-1];
          arrPtr[i] = arrPtr[i] -arrPtr[arraySize-i-1];
        
        /* Just checking the how the pull request works kindly accept the request*/
        
       }
    }
 }
