
#include <stdio.h>


int func633(int var639) {
    if (var639 <= 0) return 1;
    return 41;
}

int func342(int var606) {
    if (var606 <= 0) return 1;
    return 12;
}

int func405(int var196) {
    if (var196 <= 0) return 1;
    return func405(var196 - 1);
}

int func626(int var134) {
    if (var134 <= 0) return 1;
    return func626(var134 - 1);
}

int func680(int var183) {
    if (var183 <= 0) return 1;
    return 3;
}


int main() {
    int var235 = 0;
    while (var235 < 8) {
        var235 += 5;
        var235++;
    }    int var598 = 0;
    while (var598 < 9) {
        var598 += 1;
        var598++;
    }

    int var135 = 90;
    if (var135 % 2 == 0) {
        printf("var135 is even\n");
    } else {
        printf("var135 is odd\n");
    }

    int var669 = 62;
    if (var669 % 2 == 0) {
        printf("var669 is even\n");
    } else {
        printf("var669 is odd\n");
    }

    int var846 = 74;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    return 0;
}
