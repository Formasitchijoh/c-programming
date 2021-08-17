#include <stdio.h>
#include <stdlib.h>
  void greet_user();
 void show_operation();
void your_choice(int*choice );
  void exit_program(int choice);
  void read_numbers(double*n,double*m);
  void perform_operation(int choice, double n,double m);

   int main(void)
   { int choice ;
     greet_user(); 
     show_operation();
            your_choice(&choice);
             
              exit_program(choice);
              double x,y;
              read_numbers(&x,&y);
              perform_operation(choice,x,y);
     
     
              return 0;                  
   }

   void greet_user(){ 
       printf("Hello,I'm here to make your lifes better");
}

   void show_operation()
   {
       printf("\n\nchose the operation you want to perform\n");
       printf("1.Addition\n2.Multiplication\n3.subtraction\n4.divition\n5.exit");
   }

void your_choice(int *choice){
       
   printf("\nEnter your choice from 1 to 5\n");// 3
       scanf("%d",choice);
}
void exit_program(int choice){
if (choice == 5){

  exit(0);
  }
}
void read_numbers(double * n,double * m){
    printf("enter the two numbers\n");
    scanf("%lf %lf",n,m);
}
 void perform_operation( int choice ,double n, double m)
 { 
     int result;
     if(choice == 1){
         result = n + m;
     }
     else if(choice == 2)
     {
         result =(n*m);
     }
     else if (choice == 3)
     {
         result = (n-m);
     }
     else if(choice == 4)
     {
         result =(n/m);
     }
     else if(choice == 5)
     {
         exit(0);
     }
       printf("your result is = %d",result);
       }