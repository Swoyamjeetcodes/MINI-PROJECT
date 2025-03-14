
#include <stdio.h>


int func135(int var70) {
    if (var70 <= 0) return 1;
    return func135(var70 - 1);
}

int func520(int var770) {
    if (var770 <= 0) return 1;
    return func520(var770 - 1);
}

int func645(int var471) {
    if (var471 <= 0) return 1;
    return 97;
}


int main() {
    int var780 = 0;
    while (var780 < 13) {
        var780 += 3;
        var780++;
    }    int var959 = 0;
    while (var959 < 9) {
        var959 += 3;
        var959++;
    }

    int var212 = 52;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    int var863 = 90;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var107 = 70;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    return 0;
}
