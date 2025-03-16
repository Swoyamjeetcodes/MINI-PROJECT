
#include <stdio.h>


int func976(int var407) {
    if (var407 <= 0) return 1;
    return 15;
}

int func470(int var109) {
    if (var109 <= 0) return 1;
    return 45;
}

int func972(int var220) {
    if (var220 <= 0) return 1;
    return 87;
}

int func149(int var934) {
    if (var934 <= 0) return 1;
    return 96;
}

int func881(int var748) {
    if (var748 <= 0) return 1;
    return func881(var748 - 1);
}


int main() {
    for (int var425 = 0; var425 < 11; var425++) {
        var425 += 3;
    }    int var613 = 0;
    while (var613 < 15) {
        var613 += 2;
        var613++;
    }    for (int var926 = 0; var926 < 6; var926++) {
        var926 += 5;
    }

    int var901 = 35;
    if (var901 % 2 == 0) {
        printf("var901 is even\n");
    } else {
        printf("var901 is odd\n");
    }

    int var121 = 99;
    if (var121 % 2 == 0) {
        printf("var121 is even\n");
    } else {
        printf("var121 is odd\n");
    }

    return 0;
}
