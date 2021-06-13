#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t ;
	scanf("%d\n",&t);
	while(t--){
	char s1[200] ;
	char s2[200] ;
	gets(s1);
	gets(s2);
	char arr1[200][200] ;
	char arr2[200][200];
	int j = 0 , k = 0 ; 
	for(int i = 0 ; s1[i] != '\0' ;i++){
		if( s1[i] != ' '){
			arr1[j][k++] = s1[i] ;
		}
		else{
			arr1[j++][k] = '\0' ;
			k = 0 ; 
		}
	}
	arr1[j][k] = '\0' ; 
	int d1 = j ; 
	int m = 0  , n = 0 ; 
	for(int i = 0 ; s2[i] != '\0' ;i++){
		if( s2[i] != ' '){
			arr2[m][n++] = s2[i] ;
		}
		else{
			arr2[m++][n] = '\0' ;
			n = 0 ; 
		}
	}
	arr2[m][n] = '\0' ; 
	int l = 0 ; 
	int d2 = m ; 
	for(int i = 0 ; i < d1 + 1 ; i++){
		for(int z = i+1 ; z < d1 + 1 ; z++){
			if(strcmp(arr1[i],arr1[z])==0){
				arr1[z][l] = '\0' ; 
			}
		}
	}
	for(int  i = 0 ; i < d1 +1 ; i++){
		if(arr1[i][l] != '\0'){
			for(int z = 0 ; z < d2 +1 ; z++){
				if(strcmp(arr1[i],arr2[z])==0){
					arr1[i][l] = '\0' ;
				}
			}
		}
	}
	for(int i = 0 ; i < d1+1 ; i++){
		char sx[100] ; 
		if(arr1[i][l] != '\0'){
			for(int z = i +1 ; z < d1+1;z++){
				if(strcmp(arr1[i],arr1[z])>0){
					strcpy(sx,arr1[i]);
					strcpy(arr1[i],arr1[z]);
					strcpy(arr1[z],sx);
				}
			}
				printf("%s ",arr1[i]);
		}
	}
	printf("\n");
	}

}