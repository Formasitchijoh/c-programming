#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the  two intergers  numbers n and m\n");
      scanf("%d %d",&n,&m);
      int sum = n + m ;
       int product = n*m;
       double quotient = n/m;
       int difference = n - m;
       printf(" %d\n,%d\n,%f\n",sum,product,quotient);
       return 0;
}
