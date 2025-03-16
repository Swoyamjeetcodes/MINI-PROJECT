
#include <stdio.h>


int func261(int var505) {
    if (var505 <= 0) return 1;
    return 28;
}

int func564(int var268) {
    if (var268 <= 0) return 1;
    return func564(var268 - 1);
}

int func767(int var492) {
    if (var492 <= 0) return 1;
    return func767(var492 - 1);
}


int main() {
    for (int var671 = 0; var671 < 15; var671++) {
        var671 += 3;
    }    for (int var594 = 0; var594 < 5; var594++) {
        var594 += 2;
    }    int var183 = 0;
    while (var183 < 12) {
        var183 += 1;
        var183++;
    }

    int var677 = 15;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    int var997 = 2;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    int var589 = 26;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
