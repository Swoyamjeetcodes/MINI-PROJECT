
#include <stdio.h>


int func343(int var19) {
    if (var19 <= 0) return 1;
    return func343(var19 - 1);
}


int main() {
    int var1000 = 0;
    while (var1000 < 15) {
        var1000 += 1;
        var1000++;
    }

    int var644 = 42;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    return 0;
}
