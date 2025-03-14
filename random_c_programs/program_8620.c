
#include <stdio.h>


int func896(int var204) {
    if (var204 <= 0) return 1;
    return 88;
}

int func586(int var107) {
    if (var107 <= 0) return 1;
    return 13;
}

int func942(int var467) {
    if (var467 <= 0) return 1;
    return func942(var467 - 1);
}


int main() {
    for (int var433 = 0; var433 < 19; var433++) {
        var433 += 5;
    }    for (int var159 = 0; var159 < 14; var159++) {
        var159 += 1;
    }    int var317 = 0;
    while (var317 < 12) {
        var317 += 2;
        var317++;
    }

    int var512 = 37;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    int var661 = 26;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    int var667 = 33;
    if (var667 % 2 == 0) {
        printf("var667 is even\n");
    } else {
        printf("var667 is odd\n");
    }

    return 0;
}
