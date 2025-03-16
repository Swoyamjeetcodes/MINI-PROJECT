
#include <stdio.h>


int func132(int var364) {
    if (var364 <= 0) return 1;
    return func132(var364 - 1);
}

int func486(int var744) {
    if (var744 <= 0) return 1;
    return 65;
}

int func636(int var716) {
    if (var716 <= 0) return 1;
    return func636(var716 - 1);
}

int func891(int var29) {
    if (var29 <= 0) return 1;
    return 90;
}


int main() {
    int var379 = 0;
    while (var379 < 8) {
        var379 += 2;
        var379++;
    }    int var441 = 0;
    while (var441 < 16) {
        var441 += 5;
        var441++;
    }    int var605 = 0;
    while (var605 < 7) {
        var605 += 3;
        var605++;
    }

    int var951 = 78;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    int var774 = 41;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    int var332 = 14;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
