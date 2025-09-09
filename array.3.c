include s<tdio.h>
int main(){
int n;
int sum=0;
printf("print the value of n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("%d \n",i);
    sum+=i;
}
printf("sum of the given number %d",sum);
int mean=sum/n;
printf("mean of the given number %d",mean);

}
