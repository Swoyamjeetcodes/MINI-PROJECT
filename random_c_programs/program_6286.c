
#include <stdio.h>


int func157(int var822) {
    if (var822 <= 0) return 1;
    return 12;
}

int func651(int var907) {
    if (var907 <= 0) return 1;
    return 80;
}

int func762(int var387) {
    if (var387 <= 0) return 1;
    return 4;
}

int func889(int var435) {
    if (var435 <= 0) return 1;
    return 58;
}

int func769(int var303) {
    if (var303 <= 0) return 1;
    return func769(var303 - 1);
}


int main() {
    int var388 = 0;
    while (var388 < 19) {
        var388 += 4;
        var388++;
    }    int var119 = 0;
    while (var119 < 18) {
        var119 += 2;
        var119++;
    }

    int var341 = 35;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    int var254 = 73;
    if (var254 % 2 == 0) {
        printf("var254 is even\n");
    } else {
        printf("var254 is odd\n");
    }

    return 0;
}
