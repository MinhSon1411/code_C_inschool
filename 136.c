#include<stdio.h>
#include<string.h>
int main(){
	char s1[101];
	char s2[101];
	gets(s1);
	gets(s2);
	char arr1[50][50];
	int j=0;int k=0;
	char arr2[50][50];
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]!=' '){
			arr1[j][k]=s1[i];
			k++;
		}else{
			arr1[j][k]='\0';
			j++;k=0;
		}
	}arr1[j][k]='\0';int sl1=j;
	j=0;k=0;
	for(int i=0;s2[i]!='\0';i++){
		if(s2[i]!=' '){
			arr2[j][k]=s2[i];
			k++;
		}else{
			arr2[j][k]='\0';
			j++;k=0;
		}
	}arr2[j][k]='\0';int sl2=j;
	k=0;
	for(int i=0;i<sl1+1;i++){
		if(arr1[i][k]!='\0'){
			for(int z=i+1;z<sl1+1;z++){
				if(strcmp(arr1[i],arr1[z])==0)arr1[z][k]='\0';
			}
		}
	}
	for(int i=0;i<sl1+1;i++){
		if(arr1[i][k]!='\0'){
			for(int z=0;z<sl2+1;z++){
				if(strcmp(arr1[i],arr2[z])==0)arr1[i][k]='\0';
			}
		}
	}for(int i=0;i<sl1+1;i++){
		char tam[50];
		if(arr1[i][k]!='\0'){
			for(int z=i+1;z<sl1+1;z++){
				if(strcmp(arr1[z],arr1[i])<0){
					strcpy(tam,arr1[i]);
					strcpy(arr1[i],arr1[z]);
					strcpy(arr1[z],tam);
				}
			}
			printf("%s ",arr1[i]);
		}
	}
}