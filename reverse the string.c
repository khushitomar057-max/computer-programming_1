#include <stdio.h>
#include <string.h>

int main(){
   printf("enter string 1");
   char str1[20];
   gets(str1);
   strrev(str1);
   printf("string after reversing: %s",str1);
  return 0;
}
   
