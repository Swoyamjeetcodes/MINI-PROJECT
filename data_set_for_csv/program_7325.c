
#include <stdio.h>


int func912(int var336) {
    if (var336 <= 0) return 1;
    return func912(var336 - 1);
}

int func295(int var702) {
    if (var702 <= 0) return 1;
    return 83;
}

int func442(int var715) {
    if (var715 <= 0) return 1;
    return func442(var715 - 1);
}

int func205(int var389) {
    if (var389 <= 0) return 1;
    return func205(var389 - 1);
}

int func581(int var357) {
    if (var357 <= 0) return 1;
    return func581(var357 - 1);
}


int main() {
    for (int var914 = 0; var914 < 15; var914++) {
        var914 += 2;
    }    for (int var989 = 0; var989 < 18; var989++) {
        var989 += 4;
    }    int var514 = 0;
    while (var514 < 12) {
        var514 += 3;
        var514++;
    }    int var92 = 0;
    while (var92 < 12) {
        var92 += 1;
        var92++;
    }    for (int var294 = 0; var294 < 7; var294++) {
        var294 += 4;
    }    for (int var253 = 0; var253 < 17; var253++) {
        var253 += 1;
    }    int var836 = 0;
    while (var836 < 17) {
        var836 += 3;
        var836++;
    }

    int var807 = 54;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    int var918 = 77;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    int var814 = 96;
    if (var814 % 2 == 0) {
        printf("var814 is even\n");
    } else {
        printf("var814 is odd\n");
    }

    return 0;
}
