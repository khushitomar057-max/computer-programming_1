
#include<stdio.h>
int main(){
   int a[10],i,j;
   printf("enter 10 differnt values \n ");
   for(i=0;i<10;i++){
      scanf("%d",&a[i]);
   }
  for(i=0;i<10;i++){
   int count = 0;
   for(j=0;j<10;j++){
      if(a[i]==a[j]){
        count++;

      }
      
   }
   printf(" %d appers %d times \n",a[i],count);
  }
   return 0;
}
   
