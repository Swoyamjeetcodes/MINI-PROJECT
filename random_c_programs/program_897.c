
#include <stdio.h>


int func439(int var15) {
    if (var15 <= 0) return 1;
    return 80;
}

int func419(int var808) {
    if (var808 <= 0) return 1;
    return func419(var808 - 1);
}

int func617(int var975) {
    if (var975 <= 0) return 1;
    return func617(var975 - 1);
}

int func128(int var329) {
    if (var329 <= 0) return 1;
    return 87;
}

int func621(int var870) {
    if (var870 <= 0) return 1;
    return 92;
}

int func277(int var669) {
    if (var669 <= 0) return 1;
    return func277(var669 - 1);
}

int func387(int var759) {
    if (var759 <= 0) return 1;
    return func387(var759 - 1);
}


int main() {
    for (int var439 = 0; var439 < 15; var439++) {
        var439 += 2;
    }    int var231 = 0;
    while (var231 < 19) {
        var231 += 2;
        var231++;
    }

    int var625 = 88;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    int var536 = 14;
    if (var536 % 2 == 0) {
        printf("var536 is even\n");
    } else {
        printf("var536 is odd\n");
    }

    int var230 = 47;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    int var23 = 42;
    if (var23 % 2 == 0) {
        printf("var23 is even\n");
    } else {
        printf("var23 is odd\n");
    }

    return 0;
}
