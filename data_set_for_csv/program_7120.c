
#include <stdio.h>


int func10(int var31) {
    if (var31 <= 0) return 1;
    return func10(var31 - 1);
}

int func80(int var78) {
    if (var78 <= 0) return 1;
    return func80(var78 - 1);
}

int func976(int var409) {
    if (var409 <= 0) return 1;
    return 49;
}

int func186(int var869) {
    if (var869 <= 0) return 1;
    return 59;
}

int func419(int var263) {
    if (var263 <= 0) return 1;
    return 4;
}


int main() {
    int var930 = 0;
    while (var930 < 11) {
        var930 += 2;
        var930++;
    }    int var614 = 0;
    while (var614 < 6) {
        var614 += 4;
        var614++;
    }    int var742 = 0;
    while (var742 < 13) {
        var742 += 2;
        var742++;
    }

    int var884 = 35;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    int var528 = 74;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    int var276 = 16;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    return 0;
}
