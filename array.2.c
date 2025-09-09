#include<stdio.h>

int main(){
int num [5];
printf("enter any 5 values /n");
for(int i=0;i<5;i++){
    scanf("%d /n",&num[i]);
}
printf(" print the given values /n");
for(int i=0;i<5;i++){
    printf("%d /n",num[i]);
}
return 0;


}
