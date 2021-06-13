#include<stdio.h>
#include<string.h>
#include<ctype.h>

void dao(char s[]){
	char tmp[600] ; int j = 0 ; int  n = strlen(s) ;  
	for(int i = strlen(s)-1 ; i >= 0; i--){
		tmp[j++] = s[i] ;  
	}
	tmp[n] = '\0' ; strcpy(s,tmp);
}
void tru(char a[] , char b[]){
	dao(a) ;  dao(b);
	char hieu[1000] ; 
	int  n = strlen(a) ; int m = strlen(b); int l ;
	strcat(a,"0") ;
	for(int i = 0 ; i <= n - m ; i++){
		strcat(b,"0");
	}
	int t , nho = 0 ; 
	for(int i = 0 ; i <=n ; i++){
		t = (a[i] -48) - ( b[i] - 48 ) - nho ; 
		if(t >= 0 ){
			hieu[i] = t + 48; 
		}
		else {
			hieu[i] = t + 58;
			nho = 1 ;  
		}
	}
	hieu[n] = '\0' ; 
	dao(hieu) ;
	for(int i = 0 ; i < strlen(hieu) ; i++){
		if(hieu[i]-48 != 0){
			l = i ; 
			break ;
		}
	}
	for(int i = l ; i< strlen(hieu) ; i++){
		printf("%c",hieu[i]);
	}
}
int main(){
	int t ;
	scanf("%d",&t);	
	while(t--){
		char a[600] ; char  b[600] ; 
		scanf("%s%s",&a,&b);
		if(strlen(a)>strlen(b)) tru(a,b);
		else if(strlen(a)==strlen(b) && a[0]-48>=b[0]-48) tru(a,b);
		else if(strlen(b) >strlen(a)) tru(b,a);
		else if(strlen(a)==strlen(b) && (b[0]-48)>=(a[0]-48)) tru(b,a);
		printf("\n");
	}
	
}