
#include <stdio.h>


int func120(int var610) {
    if (var610 <= 0) return 1;
    return func120(var610 - 1);
}


int main() {
    for (int var348 = 0; var348 < 18; var348++) {
        var348 += 4;
    }    for (int var973 = 0; var973 < 13; var973++) {
        var973 += 3;
    }

    int var930 = 39;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    int var418 = 64;
    if (var418 % 2 == 0) {
        printf("var418 is even\n");
    } else {
        printf("var418 is odd\n");
    }

    return 0;
}
