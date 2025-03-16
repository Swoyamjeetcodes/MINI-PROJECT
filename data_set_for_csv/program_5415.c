
#include <stdio.h>


int func114(int var544) {
    if (var544 <= 0) return 1;
    return 88;
}

int func122(int var182) {
    if (var182 <= 0) return 1;
    return func122(var182 - 1);
}

int func560(int var326) {
    if (var326 <= 0) return 1;
    return 10;
}


int main() {
    int var691 = 0;
    while (var691 < 6) {
        var691 += 2;
        var691++;
    }    int var226 = 0;
    while (var226 < 20) {
        var226 += 2;
        var226++;
    }    int var854 = 0;
    while (var854 < 5) {
        var854 += 3;
        var854++;
    }

    int var927 = 23;
    if (var927 % 2 == 0) {
        printf("var927 is even\n");
    } else {
        printf("var927 is odd\n");
    }

    int var898 = 32;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    return 0;
}
