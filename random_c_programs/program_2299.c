
#include <stdio.h>


int func460(int var494) {
    if (var494 <= 0) return 1;
    return 34;
}

int func795(int var586) {
    if (var586 <= 0) return 1;
    return func795(var586 - 1);
}

int func98(int var688) {
    if (var688 <= 0) return 1;
    return 98;
}

int func191(int var611) {
    if (var611 <= 0) return 1;
    return func191(var611 - 1);
}

int func815(int var29) {
    if (var29 <= 0) return 1;
    return func815(var29 - 1);
}


int main() {
    for (int var835 = 0; var835 < 19; var835++) {
        var835 += 1;
    }    for (int var114 = 0; var114 < 14; var114++) {
        var114 += 4;
    }    int var635 = 0;
    while (var635 < 5) {
        var635 += 3;
        var635++;
    }

    int var792 = 84;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var762 = 24;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
