
#include <stdio.h>


int func445(int var201) {
    if (var201 <= 0) return 1;
    return 84;
}

int func713(int var413) {
    if (var413 <= 0) return 1;
    return func713(var413 - 1);
}

int func462(int var885) {
    if (var885 <= 0) return 1;
    return 99;
}

int func421(int var526) {
    if (var526 <= 0) return 1;
    return func421(var526 - 1);
}

int func290(int var351) {
    if (var351 <= 0) return 1;
    return 47;
}


int main() {
    for (int var17 = 0; var17 < 11; var17++) {
        var17 += 2;
    }    for (int var493 = 0; var493 < 17; var493++) {
        var493 += 2;
    }    int var330 = 0;
    while (var330 < 18) {
        var330 += 2;
        var330++;
    }

    int var61 = 48;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    return 0;
}
