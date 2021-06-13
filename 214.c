#include<stdio.h>
#include<math.h>
int main(){
	int t ; 
	scanf("%d",&t);
	while(t--){
		double x1 , y1 , x2 , y2 ,x3 , y3 ;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		double d1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		double d2 = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
		double d3 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
		if( d1 + d2 <= d3 || d1 + d3 <= d2 || d2 + d3 <= d1){
			printf("INVALID\n");
		} else {
			double p=(d1+d2+d3)/2;
    		double s = sqrt(p) * sqrt(p - d3) * sqrt(p - d1) * sqrt(p - d2);
    		printf("%0.2lf\n", s);
			}
	}
}