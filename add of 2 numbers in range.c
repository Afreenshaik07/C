#include<stdio.h>
void main()
{
    int a,b,res=0;
    scanf("%d %d",&a,&b);
    int c=a;
    while(c<=b)
    {
        res=res+c;
        c++;
    }
    printf("%d",res);
}