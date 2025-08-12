#include <stdio.h>

int main(){
int a,b,c;
printf("write a number  a ");
scanf("%d",&a);
printf("write second number  b ");
scanf("%d",&b);
printf("write a number  c ");
scanf("%d",&c);

if(a<b && a<c){
printf("a is smallest number \n");
}
else if(a>b && a>c) {
printf(" a is greatest number \n");
}
if(b<a && b<c){
printf("b is smallest number \n ");
}
else if(b>a && b>c) {
printf(" b is greatest number \n");
}

if(c<b && c<b){
printf("c is smallest number \n");
}
else if(c>b && c>b) {
printf(" c is greatest number \n");
}
else{

printf("all of them are equal \n");
}
return 0;
}
