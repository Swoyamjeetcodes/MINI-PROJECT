
#include <stdio.h>


int func748(int var1) {
    if (var1 <= 0) return 1;
    return func748(var1 - 1);
}


int main() {
    int var180 = 0;
    while (var180 < 19) {
        var180 += 5;
        var180++;
    }

    int var410 = 51;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    return 0;
}
