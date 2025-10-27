#include <stdio.h>
#include <string.h>

void main(){
   printf("enter string");
   char str[20];
   gets(str);
   int s=strlen(str);
   printf("%i",s);

}
