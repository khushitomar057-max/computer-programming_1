#include <stdio.h>
int main(){
   int arr1[10],arr2[10],i;
   printf("enter elements of array \n");
   for(i=0;i<5;i++){
      scanf("%d",&arr1[i]);
   }

   for(i=0;i<5;i++){
      arr2[i]=arr1[i+1];
   }

printf("new array after deleting value \n");
for(i=0;i<4;i++){
   printf("%d",arr2[i]);
}
 return 0;
}
