#include <stdio.h>
int main(){
   int arr1[10],arr2[10],i,n,pos,value;
   printf("enter value of n for elements of array");
   scanf("%d", &n);
   printf("enter elements of array \n");
   for(i=0;i<n;i++){
      scanf("%d",&arr1[i]);
   }
   printf("enter value for deleting from array");
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
       for(i=0;i<pos;i++){
      arr2[i]=arr1[i];
   }
   for(i=pos;i<n-1;i++){
      arr2[i]=arr1[i+1];
   }
    n--;   
   printf("new array after deleting value \n");
    for(i=0;i<n;i++){
   printf("%d",arr2[i]);
   }
}

 return 0;
}   
