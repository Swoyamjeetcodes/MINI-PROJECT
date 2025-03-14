
#include <stdio.h>


int func703(int var267) {
    if (var267 <= 0) return 1;
    return func703(var267 - 1);
}

int func275(int var338) {
    if (var338 <= 0) return 1;
    return 98;
}

int func864(int var599) {
    if (var599 <= 0) return 1;
    return func864(var599 - 1);
}


int main() {
    for (int var68 = 0; var68 < 20; var68++) {
        var68 += 5;
    }    for (int var326 = 0; var326 < 11; var326++) {
        var326 += 4;
    }    for (int var614 = 0; var614 < 15; var614++) {
        var614 += 2;
    }    int var469 = 0;
    while (var469 < 9) {
        var469 += 3;
        var469++;
    }

    int var382 = 49;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    int var502 = 36;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    return 0;
}
