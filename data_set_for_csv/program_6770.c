
#include <stdio.h>


int func841(int var93) {
    if (var93 <= 0) return 1;
    return 100;
}

int func697(int var376) {
    if (var376 <= 0) return 1;
    return 30;
}

int func444(int var758) {
    if (var758 <= 0) return 1;
    return func444(var758 - 1);
}


int main() {
    int var267 = 0;
    while (var267 < 16) {
        var267 += 3;
        var267++;
    }    int var125 = 0;
    while (var125 < 15) {
        var125 += 4;
        var125++;
    }    int var23 = 0;
    while (var23 < 6) {
        var23 += 4;
        var23++;
    }

    int var261 = 87;
    if (var261 % 2 == 0) {
        printf("var261 is even\n");
    } else {
        printf("var261 is odd\n");
    }

    int var360 = 73;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    int var142 = 56;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
