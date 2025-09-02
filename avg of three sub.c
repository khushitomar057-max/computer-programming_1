
#include<stdio.h>

int main(){
   int math,sci,eng;
   printf("enter marks of maths:");
   scanf("%d",&math);
   printf("enter marks of science:");
   scanf("%d",&sci);
   printf("enter marks of english:");
   scanf("%d",&eng);
   if (math<35){
    printf("fail");
   }
   else if (sci<35){
    printf(" student is fail");
   }
   else if (eng<35){
    printf("fail");
   }
   else{
    int sum= math+sci+eng;
    int avg= sum/3;
    printf("average of three subjects marks are;%d \n",avg);
    if(avg>=70 ){
        printf("distinction");
    }
    else if(avg>=60 && avg<70){
        printf("first");
    }
    else if(avg>=50 && avg<60){
        printf("second");
    
    }
    else if( avg>=35 && avg<50){
        printf("thirdclass");
    }
    else{
        printf("fail");
    }

   }
    return 0;
}




