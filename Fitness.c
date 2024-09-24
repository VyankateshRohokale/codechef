#include <stdio.h>

int main() {
    int t;
    int sum = 0;
    scanf("%d", &t);
    
    while (t--) 
    {
        int x;
        scanf("%d", &x);
        
        sum = x * 10;
        printf("%d\n",sum);
        
    }
    
}
