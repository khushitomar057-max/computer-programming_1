#include <stdio.h>
int main(){
   int arr1[10],arr2[10],i,j,n;
   printf("enter elements of array");
   for(i=0;i<5;i++){
      scanf("%d",&arr1[i]);
   }
   for(i=0;i<6;i++){
      arr2[i+1]=arr1[i];
   }
printf("enter value of n to insert in array");
scanf("%d",&n);

arr2[0]=n;

printf("changed array equals to");
for(i=0;i<6;i++){
   printf("%d",arr2[i]);
}
 return 0;
}   
