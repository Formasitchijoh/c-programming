#include <stdio.h>
#include <string.h>
#define N 30
 void give_input();
void read_drome(char array[]);
  int main(void)
  {    char array[N];
      give_input();
      read_drome(array);
      return 0;
       
  }
   void give_input(){
       printf("Enter the input to be searched\n");
   }
  void read_drome(char array[]){
  int c,j = 0;
  int i = N- 1;
   while((c=getchar()) != '\n'  &&  j< N){
   
       array[i] = c;
       j++;
 }
    while(i>j){
       if(array[i--] != array[j++])
       {
           printf(" %s palindrome \n",array);
                }
   
      else /*if(array[i] != array[j])*/
      {
          printf(" %s Not palindrom\n",array);
      }
   }
  }
  
  
  
  
  



