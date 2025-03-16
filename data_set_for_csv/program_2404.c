
#include <stdio.h>


int func395(int var957) {
    if (var957 <= 0) return 1;
    return 45;
}

int func713(int var480) {
    if (var480 <= 0) return 1;
    return 35;
}

int func444(int var769) {
    if (var769 <= 0) return 1;
    return func444(var769 - 1);
}


int main() {
    for (int var381 = 0; var381 < 13; var381++) {
        var381 += 4;
    }    for (int var333 = 0; var333 < 14; var333++) {
        var333 += 5;
    }    int var403 = 0;
    while (var403 < 5) {
        var403 += 3;
        var403++;
    }

    int var6 = 1;
    if (var6 % 2 == 0) {
        printf("var6 is even\n");
    } else {
        printf("var6 is odd\n");
    }

    int var581 = 23;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    int var29 = 8;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
