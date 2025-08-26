#include <stdio.h>
int main(){
int n;
printf("enter a value");
scanf("%d",&n);
int sum =0;

for(int i=1;i<=n;i++){
    sum=sum+(2*i);
}
    printf("%d \n",sum);

return 0;

}

