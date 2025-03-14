
#include <stdio.h>


int func701(int var993) {
    if (var993 <= 0) return 1;
    return 6;
}

int func83(int var152) {
    if (var152 <= 0) return 1;
    return func83(var152 - 1);
}

int func487(int var578) {
    if (var578 <= 0) return 1;
    return func487(var578 - 1);
}


int main() {
    int var700 = 0;
    while (var700 < 9) {
        var700 += 3;
        var700++;
    }    int var991 = 0;
    while (var991 < 9) {
        var991 += 1;
        var991++;
    }

    int var651 = 93;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    return 0;
}
