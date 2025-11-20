#include <stdio.h>
#include <string.h>
int main() {
char str1[100],temp;
char str2[100];
int i,j;
printf("enter string 1");
gets(str1);
strcpy(str2,str1);
int len=strlen(str2);
for (i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(str2[i]>str2[j]){
            temp=str2[i];
            str2[i]=str2[j];
            str2[j]=temp;
        }
    }
}
printf("%s %s",str1,str2);

return 0;  
}
