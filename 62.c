#include<stdio.h>
#include<string.h>

void xoa(char c[], char b[],int q,int p,int *k){
	int m=0;
	int n=0;
	int i,j;
	for(i=q;i<*k;i++){
		if((c[i-1]==' '&&c[i+p]==' ')||(c[i-1]==' '&&i+p==*k)){
			for(j=i;j<i+p;j++){
				if(c[j]==b[m++]) n++;
			}
		}
		m=0;
		if(n==p){
			for(j=i;j<*k-p;j++){
				c[j]=c[j+p+1];
			}
			*k=*k-p-1;
			i-=1;
		}
		n=0;
	}
}
void timTuGiongNhau(char c[],int *k){
	int i,j;
	int p=0;
	for(i=0;i<*k;i++){
		if(i==0||c[i-1]==' '){
			int q=i;
			char b[100];
			while(c[q]!=' '){
				b[p++]=c[q++];
			}
			xoa(c,b,q,p,k);
		}
		p=0;
	}
	for(i=0;i<*k;i++){
		printf("%c",c[i]);
	}
}


int main(){
	char c[100];
	fgets(c,99,stdin);
	int k=strlen(c)-1;
	timTuGiongNhau(c,&k);
	return 0;
}