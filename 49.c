#include<stdio.h>
int main () {

int A[100],n;


    
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
    
        scanf("%d",&A[i]);
    }




    int c[100];
    int dem=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
       dem =0;
       for(int j=0;j<n;j++)
       {
           if(A[i]==A[j]&&i!=j)
              dem =1;
       }
       if(dem==0) 
       	  c[d++]=A[i];
          
          
          
    
    
} 
 printf("%d\n",d);

for(int i=0;i<d;i++ ){
    	 printf("%d ",c[i]);
}
}