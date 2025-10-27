#include <stdio.h>
#include <string.h>

int main(){
   printf("enter string");
   char str[20];
   gets(str);
   strupr(str);
   printf("string in uppercase : %s",str);

  return 0;
}
