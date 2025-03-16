
#include <stdio.h>


int func375(int var268) {
    if (var268 <= 0) return 1;
    return 22;
}

int func48(int var444) {
    if (var444 <= 0) return 1;
    return func48(var444 - 1);
}

int func352(int var180) {
    if (var180 <= 0) return 1;
    return func352(var180 - 1);
}


int main() {
    for (int var206 = 0; var206 < 10; var206++) {
        var206 += 2;
    }    int var767 = 0;
    while (var767 < 18) {
        var767 += 2;
        var767++;
    }    int var493 = 0;
    while (var493 < 20) {
        var493 += 3;
        var493++;
    }

    int var869 = 34;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var539 = 33;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    int var570 = 12;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
