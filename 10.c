#include<stdio.h>
#include<math.h>
int main () {
int a,b;
scanf("%d%d",&a,&b);
int sum=0;
if(a<b){

for (int i=a;i<=b;i++){
sum=sum+i;}
printf("%d",sum);}
else if (a>b) {
	for(int i=a;i>=b;i--) {
		sum=sum+i;
	}
	printf("%d",sum);
}
}