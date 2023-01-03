#include <stdio.h>
#include <stdlib.h>

union uUnion {
    struct {
        int a;
        int b;
    } a;
    
    struct {
        char a;
        char b;
    } b;
    
    int c;
    
    union {
        int a;
        char b;
    } d;
    
    struct {
        struct {
            int a;
            int b;
        } a;
    } e;
};

union uUnion gA = (union uUnion) { .b = { .a = 'c', .b = 'd' } };

int main()
{
    printf("%c\n", gA.b.a);
    
    return 0;
}

