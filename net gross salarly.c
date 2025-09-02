#include<stdio.h>

int main(){
   int gross;
   printf("enter gross salary");
   scanf("%d",&gross);
   float allowance=0.1*gross;
   float deduction=0.03*gross;
   float net= gross+allowance-deduction;

   printf("net sales equals: %f \n",net);
    return 0;
}
