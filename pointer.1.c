
#include<stdio.h>
int main(){
   int a[5],*p,i;
   p=a;
   printf("enter 5 different values ");
   for(i=0;i<5;i++){
      scanf("%d",p);
      p++;
   }
   printf("now, printing all values of array");
   p=a;
   for(i=0;i<5;i++){
      printf("%d",*p);
      p++;
   }
   return 0;
}
   
