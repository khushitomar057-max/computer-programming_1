
#include<stdio.h>
int main(){
   int a[10],num,i;
   int n=5;
   printf("enter 5 differnt values \n ");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("enter any number for insertation");
   scanf("%d",&num);
  for(i=n;i>0;i--){
   a[i]=a[i-1];
  }
  a[0]=num;
  n++;
  
  printf("array after insertation");

  for(i=0;i<n;i++)
  printf("%d",a[i]);

   return 0;
}
   
