
#include <stdio.h>


int func887(int var232) {
    if (var232 <= 0) return 1;
    return func887(var232 - 1);
}

int func684(int var133) {
    if (var133 <= 0) return 1;
    return 29;
}

int func555(int var929) {
    if (var929 <= 0) return 1;
    return func555(var929 - 1);
}


int main() {
    for (int var336 = 0; var336 < 14; var336++) {
        var336 += 3;
    }    for (int var705 = 0; var705 < 20; var705++) {
        var705 += 5;
    }    int var830 = 0;
    while (var830 < 6) {
        var830 += 2;
        var830++;
    }

    int var970 = 54;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    int var861 = 12;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    int var963 = 4;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
