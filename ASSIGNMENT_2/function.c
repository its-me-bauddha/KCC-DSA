#include <stdio.h>
#include <math.h>
#include <limits.h>


int maxxx_of_four(int a, int b, int c, int d)
{
    /*int e = max(a,b);
    int f = max(c ,d);
    int g = max(e,f);
    return g ;*/
    
     if(a>b && a>c && a>d) 
     {
         return a;
     }
    else if(b>c && b>d)
    {
         return b;
    }
    else if(c>d) 
    {
        return c;
    }
    else 
    {
        return d;
        }
        
}



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxxx_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
