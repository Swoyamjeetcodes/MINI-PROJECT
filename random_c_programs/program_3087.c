
#include <stdio.h>


int func23(int var271) {
    if (var271 <= 0) return 1;
    return 50;
}

int func22(int var316) {
    if (var316 <= 0) return 1;
    return func22(var316 - 1);
}

int func787(int var936) {
    if (var936 <= 0) return 1;
    return func787(var936 - 1);
}

int func942(int var48) {
    if (var48 <= 0) return 1;
    return 75;
}

int func922(int var859) {
    if (var859 <= 0) return 1;
    return func922(var859 - 1);
}


int main() {
    for (int var23 = 0; var23 < 9; var23++) {
        var23 += 2;
    }    int var41 = 0;
    while (var41 < 7) {
        var41 += 1;
        var41++;
    }    for (int var675 = 0; var675 < 17; var675++) {
        var675 += 4;
    }

    int var139 = 13;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    int var463 = 15;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var944 = 19;
    if (var944 % 2 == 0) {
        printf("var944 is even\n");
    } else {
        printf("var944 is odd\n");
    }

    return 0;
}
