#include<stdio.h>
void Check(long long a)
{
    long long uoc;
    for(long long i=2;i*i<=a;i++)
    {
        while(a%i==0)
        {
            a/=i;
            uoc=i;
        }
    }
    if(a>1)
    uoc=a;
    printf("%lld\n",uoc);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        long long  a;
        scanf("%lld",&a);
        Check(a);
    }
}