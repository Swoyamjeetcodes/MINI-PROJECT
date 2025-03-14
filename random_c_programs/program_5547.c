
#include <stdio.h>


int func958(int var739) {
    if (var739 <= 0) return 1;
    return func958(var739 - 1);
}

int func630(int var716) {
    if (var716 <= 0) return 1;
    return 21;
}

int func236(int var29) {
    if (var29 <= 0) return 1;
    return 35;
}

int func494(int var22) {
    if (var22 <= 0) return 1;
    return 62;
}

int func340(int var513) {
    if (var513 <= 0) return 1;
    return func340(var513 - 1);
}


int main() {
    for (int var742 = 0; var742 < 18; var742++) {
        var742 += 1;
    }    for (int var935 = 0; var935 < 16; var935++) {
        var935 += 3;
    }    int var533 = 0;
    while (var533 < 5) {
        var533 += 4;
        var533++;
    }

    int var295 = 77;
    if (var295 % 2 == 0) {
        printf("var295 is even\n");
    } else {
        printf("var295 is odd\n");
    }

    int var146 = 47;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    int var762 = 10;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
