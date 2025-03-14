
#include <stdio.h>


int func99(int var351) {
    if (var351 <= 0) return 1;
    return func99(var351 - 1);
}


int main() {
    for (int var348 = 0; var348 < 8; var348++) {
        var348 += 4;
    }

    int var966 = 46;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    return 0;
}
