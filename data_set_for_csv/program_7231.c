
#include <stdio.h>


int func815(int var556) {
    if (var556 <= 0) return 1;
    return func815(var556 - 1);
}

int func175(int var454) {
    if (var454 <= 0) return 1;
    return 8;
}

int func151(int var735) {
    if (var735 <= 0) return 1;
    return 98;
}

int func888(int var597) {
    if (var597 <= 0) return 1;
    return 8;
}


int main() {
    for (int var29 = 0; var29 < 9; var29++) {
        var29 += 2;
    }

    int var614 = 19;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    int var734 = 46;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    int var988 = 9;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    return 0;
}
