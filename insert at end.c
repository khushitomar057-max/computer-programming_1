#include <stdio.h>
int main(){
   int arr1[10],arr2[10],i,j,n1;
   printf("enter elements of array \n");
   for(i=0;i<5;i++){
      scanf("%d",&arr1[i]);
   }

   for(i=0;i<5;i++){
      arr2[i]=arr1[i];
   }
printf("enter value to insert in array");
scanf("%d",&n1);
arr2[5]=n1;

printf("new array equals to \n");
for(i=0;i<6;i++){
   printf("%d",arr2[i]);
}
 return 0;
}  
