#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char ch;
    char s[100];
    char sen[1000];
    
    
    scanf("%c\n%s\n%[^\n]s",&ch,s,sen);
    
    
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;   
}
