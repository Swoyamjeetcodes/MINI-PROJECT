
#include <stdio.h>


int func611(int var517) {
    if (var517 <= 0) return 1;
    return func611(var517 - 1);
}

int func694(int var784) {
    if (var784 <= 0) return 1;
    return 81;
}


int main() {
    for (int var993 = 0; var993 < 17; var993++) {
        var993 += 2;
    }    for (int var848 = 0; var848 < 8; var848++) {
        var848 += 2;
    }    int var56 = 0;
    while (var56 < 17) {
        var56 += 2;
        var56++;
    }

    int var583 = 71;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    int var704 = 96;
    if (var704 % 2 == 0) {
        printf("var704 is even\n");
    } else {
        printf("var704 is odd\n");
    }

    return 0;
}
