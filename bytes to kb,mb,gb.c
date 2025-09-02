#include<stdio.h>

int main(){
 double a;
   printf("enter number of bytes");
   scanf("%lf",&a);
   double KB=a/1024;
   double MB=a/(1024*1024);
   double GB=a/(1024*1024*1024);

   printf("number of KB: %.2f \n",KB);
   printf("number of MB: %.2f \n",MB);
   printf("number of GB: %.2f \n",GB);
    return 0;
}
