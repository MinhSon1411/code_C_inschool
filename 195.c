#include<stdio.h>
#include<math.h>

int tinh(int a , int b , int c , int d){
	int mind1 = a , mind2 = b , mind3  =c , mind4 = d ;
	while(a!=b){
		if(a>b){
			a = a - b ;
		}
		else
		b = b -a ;
	}
	int mind5 = mind1 / b ;
	int mind6 = mind2 / b ;
	while(c!=d){
		if(c > d){
			c = c -d ;
		}
		else
		d = d -c ;
	}
	int mind7 = mind3 / c ;
	int mind8 = mind4 / c ;
	int max1 = mind6 * mind8;
	int i = mind6 , j = mind8 ; 
	int bcnn ;
	while( mind6 != mind8 ){
		if(mind6>mind8){
			mind6 = mind6 - mind8 ;
		}
		else {
			mind8 = mind8 - mind6; 
		}
	}
	bcnn = max1 / mind8 ;
	int index1 = bcnn/i ;
	int index2 = bcnn/j;
	int index5 = index1*mind5;
	int index6 = index2 * mind7 ;
	printf("%d/%d %d/%d ",index1*mind5 , bcnn , index2*mind7  , bcnn );
	int sum1 ; 
	sum1 = index1 * mind5 + index2 * mind7 ;
	int index3 = sum1 , index4  = bcnn ; 
	while(sum1 != bcnn){
		if(sum1 > bcnn){
			sum1 = sum1 - bcnn ;
		}
		else
		bcnn = bcnn - sum1 ;
	}
	int m , n ; 
	m = index3/bcnn , n = index4/bcnn ; 
	printf("\n%d/%d",m,n); 
	int index7 = index5 , index8 = index6 ;
	while(index5 !=index6){
		if(index5 > index6){
			index5 = index5 - index6 ;
		}
		else
		index6 = index6 - index5 ; 
	}
	int index9 = index7 / index5 ;
	int index10 = index8 / index5 ;
	printf("\n%d/%d",index9,index10);
}
int main(){
	int t ;scanf("%d",&t);
	for(int i = 1 ; i <= t ; i++){
		int a , b ,c ,d ;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		printf("Case #%d:\n",i);
		tinh(a,b,c,d);
		printf("\n");
	}
	
}