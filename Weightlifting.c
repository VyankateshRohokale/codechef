#include <stdio.h>

int big(int a, int b)
{
    
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main() 
{
    int sum = 0;
    int a1,a2,b1,b2,c1,c2;
    int no = 0;
    
    scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
    
    no = big(a1,a2);
    sum = sum + no;
    no = big(b1,b2);
    sum = sum + no;
    no = big(c1,c2);
    sum = sum + no;
    
    printf("\n%d",sum);
    
    
    return 0;
}

