#include <stdio.h>
int main(){
   int arr1[10],i,n,pos,value;
   printf("enter value of n for elements of array");
   scanf("%d", &n);
   printf("enter elements of array \n");
   for(i=0;i<n;i++){
      scanf("%d",&arr1[i]);
   }
   printf("enter value for searching from array");
   scanf("%d", &value);
   for(i=0;i<n;i++){
      if(arr1[i]== value){
         pos=i;
         break;
      } 
   }

   if(pos>n || pos<0){
      printf("not valid position to delete ");
      
   }
   else{
   printf("position of given value in the array is: %d ",pos);
   }
 return 0;
}   
