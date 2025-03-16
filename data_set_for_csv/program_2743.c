
#include <stdio.h>


int func961(int var519) {
    if (var519 <= 0) return 1;
    return 41;
}

int func941(int var80) {
    if (var80 <= 0) return 1;
    return 20;
}

int func238(int var224) {
    if (var224 <= 0) return 1;
    return func238(var224 - 1);
}

int func334(int var145) {
    if (var145 <= 0) return 1;
    return 38;
}

int func255(int var364) {
    if (var364 <= 0) return 1;
    return func255(var364 - 1);
}

int func636(int var884) {
    if (var884 <= 0) return 1;
    return 6;
}


int main() {
    for (int var268 = 0; var268 < 6; var268++) {
        var268 += 3;
    }    int var555 = 0;
    while (var555 < 6) {
        var555 += 2;
        var555++;
    }    for (int var556 = 0; var556 < 13; var556++) {
        var556 += 2;
    }    for (int var677 = 0; var677 < 5; var677++) {
        var677 += 5;
    }

    int var886 = 20;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    int var58 = 3;
    if (var58 % 2 == 0) {
        printf("var58 is even\n");
    } else {
        printf("var58 is odd\n");
    }

    int var592 = 23;
    if (var592 % 2 == 0) {
        printf("var592 is even\n");
    } else {
        printf("var592 is odd\n");
    }

    return 0;
}
