#include <stdio.h>
#include <string.h>

int main(){
   printf("enter string 1");
   char str1[20];
   gets(str1);
   char str2[20];

   strcpy(str2,str1);
   printf("string 1: %s",str1);
   printf("string 2 : %s",str2);

  return 0;
}
  
