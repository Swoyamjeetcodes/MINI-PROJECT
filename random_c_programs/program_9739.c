
#include <stdio.h>


int func200(int var89) {
    if (var89 <= 0) return 1;
    return func200(var89 - 1);
}

int func717(int var619) {
    if (var619 <= 0) return 1;
    return 23;
}


int main() {
    int var90 = 0;
    while (var90 < 11) {
        var90 += 3;
        var90++;
    }    int var712 = 0;
    while (var712 < 11) {
        var712 += 4;
        var712++;
    }

    int var613 = 54;
    if (var613 % 2 == 0) {
        printf("var613 is even\n");
    } else {
        printf("var613 is odd\n");
    }

    return 0;
}
