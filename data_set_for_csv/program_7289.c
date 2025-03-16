
#include <stdio.h>


int func630(int var454) {
    if (var454 <= 0) return 1;
    return func630(var454 - 1);
}

int func786(int var335) {
    if (var335 <= 0) return 1;
    return func786(var335 - 1);
}


int main() {
    int var378 = 0;
    while (var378 < 12) {
        var378 += 2;
        var378++;
    }

    int var230 = 3;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    int var125 = 100;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    return 0;
}
