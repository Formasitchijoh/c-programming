#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 30
 void message_to_user();
  void performs_reversal(char array[], int n);
    int main(void){
        int n;
        char array[25]; 
        message_to_user();
         performs_reversal( &array[25],n);
         return 0;
    }
    void message_to_user(){
        printf("Enter the string to be reversed:\n");

    }
     void performs_reversal(char array[],int n){
         int i;
          int n = strlen(array[25]);


         for(i =0; i < N-1;i++)
             scanf("%s",&array[i]);
               for(i= N-1; i >= 0; i--)
                   printf("%c",array[i]);
               
         }
     
     