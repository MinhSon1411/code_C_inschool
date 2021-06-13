#include<stdio.h>
#include<string.h>
int main() {
  int k;
  scanf("%d",&k);
  for(int i=0;i<k;i++) {
	char a[18];
	scanf("%s",&a);
	int dem=strlen(a);
	for(int i=0;i<dem;i++) {
		a[i]=a[i]-48;
	}
	for(int i=0;i<dem;i++) {
		if(a[i]==8 || a[i]==9) a[i]=0;
	}
	int kt=0;
	for(int  i=0;i<dem;i++) {
			if(a[i] != 0 ) {
			kt=1;
			break;
	   }
    }
   int kt1=0;
   	for(int i=0;i<dem;i++) {
   		if(a[i] != 1 && a[i] != 0 && a[i] != 8 &&  a[i] !=9) {
		   kt1=1;
		   break;
	}  		
    }
     if(kt1==1 || kt==0) printf("INVALID");else{

    while(a[0]==0) {
      for(int  j=0; j<dem ; j ++){
		a[j] = a[j+1];
	 }
	dem--;
    }   
  
   for(int i=0;i<dem;i++)  printf("%d",a[i]);
    }
printf("\n");
  }
}