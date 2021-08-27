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
   }// This function indexes the different position in the string and
   // checks if they are equal
  void read_drome(char array[]){
  int c,j;
  int i;
   while((c=getchar()) != '\n'  &&  i< N)// Reading the character one after the other from stdin and storing 
   //it in an array
   {
   
       array[i] = c;
       i++;
 }
    for(i=N-1; i>=j;i--){
        for(j = 0;j <= i;j++)
    
       if(array[i] != array[j]) //indexing the diffferent position of th array
       {
           printf(" NOT palindrome \n");
                }
   
      else 
      {
          printf("  palindrom\n");
      }
   }
  }
  
  
  
  
  
  



