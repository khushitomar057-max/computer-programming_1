#include <stdio.h>
int main(){
int i,j,k,n;
printf("ënter value of n which is row of the matrix");
scanf("%d",&n);
 int a[n][n],b[n][n],c[n][n];
for (i=0;i<n;i++){
    for(j=0;j<n;j++)                                                                                                                                                                                                                                                                    for(j=0,j<n;j++){
         scanf("%d",&a[i][j]);

    }
for (i=0;i<n;i++){
    for(j=0,j<n;j++){
        scanf("%d",&b[i][j]);
    }
}

for (i=0;i<n;i++){
    for(j=0,j<n;j++){
        c[i][j]=o;
        for(k=o;k<n;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }

}
for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d matrix c equals to ", c[i][j]);
        }
}

printf("\n")

 return 0;
}

