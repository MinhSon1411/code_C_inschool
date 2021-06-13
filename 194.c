#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int t ;
	scanf("%d\n",&t);
	while(t--){
			char s[1000] ; 
		gets(s) ; char arr[1000][200] ;
		int n = 0 ; int dem1 = 0 ; int dem2 = 0 ; 
		char *p = strtok(s," ");
		while( p != NULL){
			strcpy(arr[n],p);
			n++ ; 
			p = strtok(NULL," ");
		}
		for(int i = 0 ; i < n ; i++){ 
			int m = atoi(arr[i]) ;
			if(m%2==0){
				dem1++ ;
			}
			else dem2++ ;
		}
		if(dem1>dem2 && n % 2==0) printf("YES\n");
		else if(dem1 < dem2 && n % 2 != 0) printf("YES\n");
		else printf("NO\n");
		}

}