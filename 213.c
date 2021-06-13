#include<stdio.h>
#include<math.h>
int main () {
	int k;
	scanf("%d\n",&k);
	for(int i=0 ;i <k ;i++) {
	float x1,x2,y1,y2,z1,z2;
	scanf("%f%f%f%f%f%f",&x1,&x2,&y1,&y2,&z1,&z2);
	float x=sqrt((pow(x1-y1,2)+pow(x2-y2,2)));
	float y=sqrt((pow(y1-z1,2)+pow(y2-z2,2)));
	float z=sqrt((pow(x1-z1,2)+pow(x2-z2,2)));
	//if( ((x1==0 && x2==0)  && ( (y1==0 && z1==0)|| (y2==0&& z2==0)) ) || ((y1==0 && y2==0) && ( ( x1==0 && z1==0 ) || (x2==0 && z2==0) ) ) || ((z1==0 && z2==0) || ((x1==0 && y1==0) || (x2==0 || y2==0)) ) ||(x1==0 && x2==0 && y1==0 && y2==0 && z1==0 && z2==0) ||(x1==0 && y1==0 && z1==0) || (x2==0&& y2==0&&z2==0) ) 
	    //  printf("INVALID");
	if( ((x1==0 && x2 ==0 ) && ((y1==0 && z1==0) || (y2==0&& z2==0) ) ) ) printf("INVALID");
	else if ( ((y1==0 && y2 ==0 ) && ((x1==0 && z1==0) || (x2==0&& z2==0) ) ) ) printf("INVALID");
	else if ( ((z1==0 && z2 ==0 ) && ((x1==0 && y1==0) || (x2==0&& y2==0) ) ) ) printf("INVALID");
	else if(x1==0 && x2==0 && y1==0 && y2==0 && x1==0 && z2==0) printf("INVALID");
	else if(x1==0 && y1==0 && z1==0) printf("INVALID");
	else  if(x2==0 && y2==0 &&z2==0 ) printf("INVALID");
	else if(x1==x2 && x2==y2 && y1==y2 && z1==y1 && z1==z2) printf("INVALID");
	else if 
(x >= y + z|| y >= x + z || z >= x + y) printf("INVALID");
else {

	float h=(x+y+z);
  
    printf("%0.3f",h);
	} 
	printf("\n");
 }
}