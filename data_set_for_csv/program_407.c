
#include <stdio.h>


int func759(int var477) {
    if (var477 <= 0) return 1;
    return func759(var477 - 1);
}

int func526(int var372) {
    if (var372 <= 0) return 1;
    return func526(var372 - 1);
}


int main() {
    int var910 = 0;
    while (var910 < 15) {
        var910 += 1;
        var910++;
    }

    int var282 = 39;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    int var547 = 81;
    if (var547 % 2 == 0) {
        printf("var547 is even\n");
    } else {
        printf("var547 is odd\n");
    }

    int var867 = 38;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
