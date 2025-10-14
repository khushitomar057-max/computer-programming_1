#include <stdio.h>
int main(){
int a[9]={500,200,100,50,20,10,5,2,1};
int n;
printf("print amount");
scanf("%d",&n);

for(int i=0;i<9;i++){
    int c=n/a[i];
    printf(" number of notes %d %d \n",a[i],c);
    n=n%a[i];

}
return 0;
}
