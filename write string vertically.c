#include <stdio.h>
#include <string.h>

int main(){
   printf("enter string 1");
   char str1[20];
   gets(str1);
   int i=0;
   while(str1[i]!='\0'){
    printf("%c \n",str1[i++]);

   }
   
  return 0;
}
