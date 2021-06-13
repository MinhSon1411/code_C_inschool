#include<stdio.h>
#include <string.h>
#include<ctype.h>
void thg(char *c)
{
	int i;
	int size=strlen(c);
	for(i=0; i<size; i++)
	{
	   
	   
	   		c[i]=tolower(c[i]);
	   
	}
	
}

int main(){
	char c[50];
	gets(c);
	thg(c);

	int mark;
		
	for(int i=strlen(c) ; i>=0 ; i--){
		
		if(c[i]=='\0' && c[i-1] != ' '){
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j] ==' ' && c[j+1] != ' '){
					
					mark=j;
					break;
				}
			}
		}
	}
	
	for(int i=0 ; i<=mark ; i++){
		if(c[i] == ' ' && c[i-1] != ' ' ){
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j-1] ==' ' || j==0){
				
					printf("%c",c[j]);	
					break;	
				}
			}
		}					
	}
	
	for(int i=mark+1 ; i<strlen(c) ; i++){
		printf("%c",c[i]);
	}
	printf("@ptit.edu.vn");
	
	
	return 0;
}