
#include <stdio.h>


int func460(int var432) {
    if (var432 <= 0) return 1;
    return func460(var432 - 1);
}

int func270(int var972) {
    if (var972 <= 0) return 1;
    return func270(var972 - 1);
}


int main() {
    int var213 = 0;
    while (var213 < 16) {
        var213 += 1;
        var213++;
    }    for (int var621 = 0; var621 < 6; var621++) {
        var621 += 1;
    }    int var17 = 0;
    while (var17 < 15) {
        var17 += 5;
        var17++;
    }

    int var294 = 74;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    int var547 = 73;
    if (var547 % 2 == 0) {
        printf("var547 is even\n");
    } else {
        printf("var547 is odd\n");
    }

    int var195 = 60;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}
