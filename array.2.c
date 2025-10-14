#include <stdio.h>
int main(){
int ar[5],i,j, temp;
printf("put 5 values in the given array \n ");
for(i=0;i<5;i++){
    scanf("%d",&ar[i]);
}
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(ar[i]<ar[j]){
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;

        }
    }
}
printf("print the given array in descending order \n");
for(int i =0; i<5;i++)
    printf("%d",ar[i]);
return 0;
}
