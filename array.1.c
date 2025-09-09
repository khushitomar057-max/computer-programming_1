#include<stdio.h>

int main(){
int num [10];
printf("enter any 10 values ");
for(int i=0;i<10;i++){
    scanf("%d /n",&num[i]);
}
printf(" print the given values /n");
printf("fourth value of array is %d /n",num[3]);
printf("seventh value of array is %d /n",num[6]);
printf("ninth value of array is %d /n",num[8]);

return 0;
}
