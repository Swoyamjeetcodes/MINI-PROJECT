
#include <stdio.h>


int func987(int var801) {
    if (var801 <= 0) return 1;
    return func987(var801 - 1);
}


int main() {
    int var764 = 0;
    while (var764 < 7) {
        var764 += 5;
        var764++;
    }    int var403 = 0;
    while (var403 < 16) {
        var403 += 1;
        var403++;
    }

    int var188 = 32;
    if (var188 % 2 == 0) {
        printf("var188 is even\n");
    } else {
        printf("var188 is odd\n");
    }

    int var384 = 88;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    int var377 = 98;
    if (var377 % 2 == 0) {
        printf("var377 is even\n");
    } else {
        printf("var377 is odd\n");
    }

    return 0;
}
