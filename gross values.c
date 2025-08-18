#include<stdio.h>
int main(){
  int gross;
   printf("enter your gross sales ;");
   scanf("%d",&gross);
  if(gross>20000){
    float g1= 0.15*gross;
    printf("net sales will equals to :%f",gross-g1);
  }
  else if (gross>=10000 && gross<=20000){
    float g2=0.1*gross;
    printf("net sales will equals to: %f",gross-g2);
  }
  else{
    float g3=0.05*gross;
    printf("net sales will eqauls to : %f", gross-g3);
  }
  return 0;
   
}




