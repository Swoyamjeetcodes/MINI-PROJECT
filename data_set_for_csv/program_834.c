
#include <stdio.h>


int func134(int var366) {
    if (var366 <= 0) return 1;
    return 26;
}

int func468(int var102) {
    if (var102 <= 0) return 1;
    return func468(var102 - 1);
}

int func637(int var912) {
    if (var912 <= 0) return 1;
    return 9;
}

int func814(int var291) {
    if (var291 <= 0) return 1;
    return func814(var291 - 1);
}

int func972(int var303) {
    if (var303 <= 0) return 1;
    return 89;
}


int main() {
    int var680 = 0;
    while (var680 < 6) {
        var680 += 2;
        var680++;
    }    int var22 = 0;
    while (var22 < 10) {
        var22 += 1;
        var22++;
    }    int var785 = 0;
    while (var785 < 7) {
        var785 += 3;
        var785++;
    }

    int var708 = 77;
    if (var708 % 2 == 0) {
        printf("var708 is even\n");
    } else {
        printf("var708 is odd\n");
    }

    int var398 = 9;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    return 0;
}
