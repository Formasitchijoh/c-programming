#include <stdio.h>
#include <string.h>
#define N 25
void reverse_string(char * str);
   int main()
   {   
       //char array[N];
       char *str;
       printf("Enter the array of charaters: ");
       //scanf("%s",&array[N]);
          reverse_string(str);
          return 0;


   }
   void reverse_string( char * str)
   {
    int c;
    char array[N];
      str = array;

      while((c= getchar()) != '\n' && str < array + N)
      {
          *str++ = c;
      }

      printf("The reverse is: ");
      for(str --; str >= array;str--)
      {
          printf("%c", *str);
      }putchar('\n');
   }
