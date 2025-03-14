
#include <stdio.h>


int func985(int var470) {
    if (var470 <= 0) return 1;
    return 33;
}

int func626(int var852) {
    if (var852 <= 0) return 1;
    return func626(var852 - 1);
}

int func448(int var697) {
    if (var697 <= 0) return 1;
    return 33;
}

int func655(int var531) {
    if (var531 <= 0) return 1;
    return 9;
}


int main() {
    for (int var116 = 0; var116 < 12; var116++) {
        var116 += 3;
    }    int var756 = 0;
    while (var756 < 5) {
        var756 += 3;
        var756++;
    }    int var343 = 0;
    while (var343 < 16) {
        var343 += 5;
        var343++;
    }

    int var18 = 84;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    int var8 = 11;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    int var666 = 58;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    return 0;
}
