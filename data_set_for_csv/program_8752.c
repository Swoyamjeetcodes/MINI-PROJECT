
#include <stdio.h>


int func565(int var486) {
    if (var486 <= 0) return 1;
    return func565(var486 - 1);
}


int main() {
    int var827 = 0;
    while (var827 < 13) {
        var827 += 4;
        var827++;
    }    for (int var621 = 0; var621 < 18; var621++) {
        var621 += 5;
    }    int var428 = 0;
    while (var428 < 13) {
        var428 += 5;
        var428++;
    }    for (int var66 = 0; var66 < 7; var66++) {
        var66 += 1;
    }    int var266 = 0;
    while (var266 < 14) {
        var266 += 2;
        var266++;
    }

    int var809 = 91;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    int var270 = 56;
    if (var270 % 2 == 0) {
        printf("var270 is even\n");
    } else {
        printf("var270 is odd\n");
    }

    return 0;
}
