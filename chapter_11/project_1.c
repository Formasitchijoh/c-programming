#include <stdio.h>
 
 void pay_amount(int dollar,int * twenties, int* tens, int*fives,int * ones);
 
int main(){
    int dollar,twenties,tens,fives,ones;
     printf("Enter the ammount in dollars:\n");
       scanf("%d",&dollar);
         pay_amount(dollar,&twenties,&tens,&fives,&ones);
           printf("Number of 20$ = %d\n",twenties);

       printf("Number of 10$=%d\n",tens);
        printf("Number of 5$ = %d\n",fives);
        printf("Number of 1$ = %d\n",ones);
         return 0;

}
 void pay_amount(int dollar,int* twenties,int *tens,int *fives,int*ones )
 {
     *twenties = dollar/20;
      dollar = dollar%20;
         *tens = dollar/10;
         dollar = dollar%10;
            *fives = dollar/5;
            dollar = dollar%5;
            *ones = dollar;
        
 }
