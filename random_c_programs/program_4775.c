
#include <stdio.h>


int func722(int var987) {
    if (var987 <= 0) return 1;
    return 19;
}

int func964(int var387) {
    if (var387 <= 0) return 1;
    return func964(var387 - 1);
}

int func236(int var851) {
    if (var851 <= 0) return 1;
    return func236(var851 - 1);
}

int func56(int var203) {
    if (var203 <= 0) return 1;
    return func56(var203 - 1);
}

int func269(int var47) {
    if (var47 <= 0) return 1;
    return 56;
}


int main() {
    int var785 = 0;
    while (var785 < 18) {
        var785 += 2;
        var785++;
    }    int var10 = 0;
    while (var10 < 8) {
        var10 += 4;
        var10++;
    }

    int var999 = 7;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    int var189 = 79;
    if (var189 % 2 == 0) {
        printf("var189 is even\n");
    } else {
        printf("var189 is odd\n");
    }

    int var470 = 42;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    return 0;
}
