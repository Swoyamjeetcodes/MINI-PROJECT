
#include <stdio.h>


int func396(int var830) {
    if (var830 <= 0) return 1;
    return func396(var830 - 1);
}

int func541(int var341) {
    if (var341 <= 0) return 1;
    return func541(var341 - 1);
}


int main() {
    int var689 = 0;
    while (var689 < 11) {
        var689 += 2;
        var689++;
    }    for (int var282 = 0; var282 < 16; var282++) {
        var282 += 5;
    }

    int var606 = 11;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    int var34 = 47;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    return 0;
}
