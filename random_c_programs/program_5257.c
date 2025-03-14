
#include <stdio.h>


int func768(int var967) {
    if (var967 <= 0) return 1;
    return func768(var967 - 1);
}


int main() {
    for (int var131 = 0; var131 < 14; var131++) {
        var131 += 5;
    }    for (int var149 = 0; var149 < 10; var149++) {
        var149 += 1;
    }

    int var760 = 90;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var227 = 92;
    if (var227 % 2 == 0) {
        printf("var227 is even\n");
    } else {
        printf("var227 is odd\n");
    }

    return 0;
}
