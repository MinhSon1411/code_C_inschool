#include<stdio.h>
#include<string.h>
 main () {
 	char a[100];
 	char b[100];
 	int k;
 	scanf("%d\n",&k);
 	for(int h=1;h<=k;h++) {
	fgets(a,99,stdin);
	b[0]=a[6];b[1]=a[7];b[2]=a[8];b[3]=a[10];
	b[4]=a[11];
	int n=5;
	int c=0,d=0,e=0;
	int f=0;
	for(int i=0;i<n-1;i++) {
	 if(b[i]-48>=b[i+1]-48)
	 c=1;
  }
  	int dem=0;
for(int i=0;i<n-1;i++) {
	if(b[i]-48==b[i+1]-48) dem++;
  }
if(dem==5-1) d=1;
if(b[0]-48==b[1]-48 && b[1]-48==b[2]-48 && b[3]-48==b[4]-48) e=1;
 for(int j=0;j<n;j++) {
 if(b[j]-48 ==6||b[j]-48 ==8){
 f++;
 }
} 
 if(c==0||d==1||e==1||f==5) printf("YES\n");
 else printf("NO\n");    	 	 
 }	
}