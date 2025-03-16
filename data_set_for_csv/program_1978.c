
#include <stdio.h>


int func415(int var236) {
    if (var236 <= 0) return 1;
    return func415(var236 - 1);
}

int func564(int var697) {
    if (var697 <= 0) return 1;
    return func564(var697 - 1);
}

int func970(int var19) {
    if (var19 <= 0) return 1;
    return func970(var19 - 1);
}

int func63(int var420) {
    if (var420 <= 0) return 1;
    return 38;
}

int func397(int var447) {
    if (var447 <= 0) return 1;
    return func397(var447 - 1);
}


int main() {
    for (int var482 = 0; var482 < 12; var482++) {
        var482 += 5;
    }    int var700 = 0;
    while (var700 < 17) {
        var700 += 3;
        var700++;
    }    for (int var761 = 0; var761 < 11; var761++) {
        var761 += 2;
    }

    int var439 = 60;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
