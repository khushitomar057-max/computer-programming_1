
#include<stdio.h>
int main(){
 int A[3][2], B[3][2], C[3][2];
 int i,j;
 printf("enter values of matrix A \n");
 for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    scanf("%d",&A[i][j]);
    }
 }
  printf("enter values of matrix B \n");
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    scanf("%d",&B[i][j]);
    }
 }
 for(i=0;i<3;i++){
    for(j=0;j<2;j++){
       C[i][j]= A[i][j]+B[i][j];
    }
 }
printf("matrix c equals to \n");
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
   printf("%d",C[i][j]);
    }
    printf("\n");
 }
    return 0;
}
   
