#include <stdio.h>
int main(){
int ar[5];
printf("put 5 values in the given array \n ");
for(int i=0;i<5;i++){
    scanf("%d",&ar[i]);
}
printf("print the given array \n ");
for(int i=0;i<5;i++){
    printf("%d \n",ar[i]);
}
return 0;
}
