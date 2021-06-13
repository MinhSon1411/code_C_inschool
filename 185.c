#include<stdio.h> 
#include<math.h>
#include<string.h> 
#include<ctype.h>
int main () {
	long long k,n,dem;
	char a[100];
	scanf("%lld\n",&k);
	for (int g=1;g<=k;g++) {
	
		gets(a);
	

		while(a[0]==' ') {
			for (int i=0;i<strlen(a);i++) a[i]=a[i+1];
		}
		while(a[strlen(a)-1]==' ' ) a[strlen(a)-1]=a[strlen(a)];
		for(int i=0; i<strlen(a) ;i++) {
			if ( (a[i]==' ' ) && (a[i+1]==' ') ) {
				for (int j=i;j<strlen(a);j++) a[j]=a[j+1];
				i--;
			}
		}
		 
			if(a[0]>='a' && a[0]<='z') a[0]-=32;
		for (int i=1;i<strlen(a);i++) {
			if (a[i]==' ' && a[i+1]>='a' && a[i+1]<='z') a[i+1]=toupper(a[i+1]); 
			if(a[i]!=' ' && a[i-1]!=' ' && a[i]>='A' && a[i]<='Z' ) a[i]=tolower(a[i]);
		}
		int input;
			for(int i=1;i<strlen(a);i++) {
				if (a[i]==' ' && a[i+1] != ' ' ) {
					input=i;
				  for(int j=i+1;j<strlen(a);j++) {
				  	printf("%c",a[j]);			  	
		    } 
			break;		  
	      }
     	}
        printf(", ");
		for(int i=0;i<input;i++) {
		a[i]=toupper(a[i])	;
		printf("%c",a[i]);
	 }
  	printf("\n");
	}

}