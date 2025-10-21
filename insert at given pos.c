#include <stdio.h>
int main(){
   int arr1[10],arr2[10],i,j,n1,n2;
   printf("enter elements of array \n");
   for(i=0;i<5;i++){
      scanf("%d",&arr1[i]);
   }
printf("enter value of position ");
scanf("%d",&n1);
    for(i=0;i<n1;i++){
      arr2[i]=arr1[i];
   }
printf("enter value to insert in array");
scanf("%d",&n2);

arr2[n1]=n2;

   for(i=n1;i<5;i++){
      arr2[i+1]=arr1[i];
   }

printf("new array equals to \n");
for(i=0;i<6;i++){
   printf("%d",arr2[i]);
}
 return 0;
}  
