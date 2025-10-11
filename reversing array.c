#include<stdio.h>
int main(){
   int a[5],a2[5],i;
   printf("enter 5 differnt values \n ");
   for(i=0;i<5;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++){
      a2[i]=a[i];
   }
   printf("new reversed array is \n");
   for(i=4;i>=0;i--){
      printf("%d ",a2[i]);
   }
   
   return 0;
}
   
