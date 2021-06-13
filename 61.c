#include<stdio.h>
#include<string.h>
char s1[100],s2[100];
void xoa(int n) {
	for (int i=n;i<strlen(s1)-1;i++) {
		 s1[i]=s1[i+1];
    }
    s1[strlen(s1)-1]='\0';
   }
 main () {
 	gets(s1);
 	gets(s2);
 	
    for(int i=0;i<strlen(s1);i++) {
	   int dem=0;  
	   if(s1[i]==s2[0] ) {
	      for(int j=1,k=i+1;j<strlen(s2);j++,k++) {
		    if(s2[j] != s1[k]) {
			dem=1;
			break; 
		     }
		   } 
		    if(dem==0) {
		    for	(int l=0;l<strlen(s2);l++)
		       xoa(i);
		    }   
	     }
	   }
	   puts(s1);
	  }