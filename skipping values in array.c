
#include<stdio.h>
int main(){
   int arr1[5],arr2[10];
   int i,j;
   for(i=0;i<5;i++){
      scanf("%d",&arr1[i]);
   }
   for(i=0;i<5;i++){
      arr2[j]=arr1[i];
      j+=2;
   }
   for(i=0;i<10;i++){
      if(arr2[i]==0 && i%2!=0){
         arr2[i]=0;
      }
   }
   printf("new array will be");
   for(i=0;i<10;i++){
      printf("%d",arr2[i]);

   }
   return 0;
}
   
   
