#include <stdio.h>
#define N 40
 void message_to_user();
  void performs_reversal(char*array[],int n);
    int main(void){
        char*array[N]; 
        int m;
        message_to_user();
         performs_reversal(&array[N],N);
         return 0;
    }
    void message_to_user(){
        printf("Enter the string to be reversed:\n");

    }
     void performs_reversal(char*array[],int n){
         int i;
         for( i =0; i < N-1; i++){
               scanf("%s",array[i]);
               printf("the reversal is");
               
               for(i= N-1; i >= 0; i--)
               {
                   printf("%s",array[i]);
               }
         }
     }