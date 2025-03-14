
#include <stdio.h>


int func313(int var581) {
    if (var581 <= 0) return 1;
    return 27;
}

int func368(int var832) {
    if (var832 <= 0) return 1;
    return func368(var832 - 1);
}

int func815(int var808) {
    if (var808 <= 0) return 1;
    return func815(var808 - 1);
}

int func62(int var468) {
    if (var468 <= 0) return 1;
    return 34;
}


int main() {
    int var463 = 0;
    while (var463 < 12) {
        var463 += 4;
        var463++;
    }    for (int var503 = 0; var503 < 13; var503++) {
        var503 += 5;
    }

    int var265 = 24;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    int var24 = 72;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    int var849 = 97;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    return 0;
}
