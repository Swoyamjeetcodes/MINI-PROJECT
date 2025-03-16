
#include <stdio.h>


int func227(int var337) {
    if (var337 <= 0) return 1;
    return 43;
}

int func253(int var792) {
    if (var792 <= 0) return 1;
    return func253(var792 - 1);
}

int func700(int var249) {
    if (var249 <= 0) return 1;
    return func700(var249 - 1);
}

int func931(int var388) {
    if (var388 <= 0) return 1;
    return func931(var388 - 1);
}


int main() {
    int var624 = 0;
    while (var624 < 7) {
        var624 += 3;
        var624++;
    }

    int var551 = 35;
    if (var551 % 2 == 0) {
        printf("var551 is even\n");
    } else {
        printf("var551 is odd\n");
    }

    return 0;
}
