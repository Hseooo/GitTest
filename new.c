#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int x = 2, y = 3;
    printf("%d + %d = %d\n", x, y, add(x, y));
    return 0;
}
