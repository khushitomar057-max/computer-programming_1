#include <stdio.h>
int main(){
   int arr1[10],arr2[10],i,n1,n;
   printf("enter value of n for elements of array");
   scanf("%d", &n);
   printf("enter elements of array \n");
   for(i=0;i<n;i++){
      scanf("%d",&arr1[i]);
   }
printf("enter position for deletation of element");
scanf("%d",&n1);
   for(i=0;i<n1;i++){
      arr2[i]=arr1[i];
   }
   for(i=n1;i<n-1;i++){
      arr2[i]=arr1[i+1];
   }

printf("new array after deleting value \n");
for(i=0;i<n-1;i++){
   printf("%d",arr2[i]);
}
 return 0;
}   
