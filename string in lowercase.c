#include <stdio.h>
#include <string.h>

int main(){
   printf("enter string");
   char str[20];
   gets(str);
   strlwr(str);
   printf("string in lowercase : %s",str);

  return 0;
}
