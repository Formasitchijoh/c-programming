#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 25
 void message_to_user();
  void performs_reversal(char array[]);
    int main(void){
        char array[N]; 
        int c;
        message_to_user();
         performs_reversal(&array[N]);
         return 0;
    }
    void message_to_user(){
        printf("Enter the string to be reversed:\n");

    }
     void performs_reversal(char array[]){
         int i;
         for( i = 0; i < N-1; i++){
               scanf("%s",&array[i]);
               for(i= N-1; i >= 0; i--)
                   printf("%c",array[i]);
               
         }
     }
     