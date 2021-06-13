#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char str[20], str1[20];
		int viTri = 0;
		scanf("%s", str);
		
		for(int i = 0; i < strlen(str)-2; i++)
			if(str[i] == '0' && str[i+1] == '8' && str[i+2] == '4')
				viTri = i;

		for(int i = 0; i < viTri; i++)
			str1[i]=str[i];
		
		for(int i = viTri; i < strlen(str)-2; i++){
			if(i+2 < strlen(str)-1)
				str1[i]=str[i+3];
			else str1[i] = '\0';
		}
		
		printf("%s\n", str1);
	}
}