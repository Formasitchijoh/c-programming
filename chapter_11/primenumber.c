#include <stdio.h>
  int prime_search(int num);
    int main()
    {  int num;
      printf("Enter the number\n");
        scanf("%d",&num);
          prime_search(num);
           return 0;

    }
    int prime_search(int num)
    {
      int n = 2;
        while(n < num)
      {
       if(num%n++ == 0 ) {
            printf(" NOT prime\n");
        }
       else
        {
        printf("prime\n");
        }
   
      }
    }
    