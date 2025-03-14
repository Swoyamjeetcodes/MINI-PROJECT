
#include <stdio.h>


int func745(int var66) {
    if (var66 <= 0) return 1;
    return func745(var66 - 1);
}

int func990(int var877) {
    if (var877 <= 0) return 1;
    return 53;
}

int func707(int var972) {
    if (var972 <= 0) return 1;
    return 47;
}

int func136(int var34) {
    if (var34 <= 0) return 1;
    return func136(var34 - 1);
}

int func815(int var168) {
    if (var168 <= 0) return 1;
    return func815(var168 - 1);
}


int main() {
    for (int var810 = 0; var810 < 11; var810++) {
        var810 += 5;
    }    for (int var440 = 0; var440 < 15; var440++) {
        var440 += 2;
    }    int var792 = 0;
    while (var792 < 11) {
        var792 += 5;
        var792++;
    }

    int var744 = 78;
    if (var744 % 2 == 0) {
        printf("var744 is even\n");
    } else {
        printf("var744 is odd\n");
    }

    int var57 = 54;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var614 = 43;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
