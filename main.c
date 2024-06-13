#include <stdio.h>
#include <malloc.h>

void f(int*  p) {
    int x = 13;
    *p = x; // 该行报错
}

int main() {
    int* b = malloc(sizeof(int) * 10);
    printf("%p",b);
    b = realloc(b, sizeof (int) * 11);
    printf("%p",b);
    return 0;
}
