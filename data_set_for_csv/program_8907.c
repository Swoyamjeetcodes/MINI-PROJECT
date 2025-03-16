
#include <stdio.h>


int func220(int var352) {
    if (var352 <= 0) return 1;
    return 83;
}

int func465(int var598) {
    if (var598 <= 0) return 1;
    return func465(var598 - 1);
}

int func250(int var775) {
    if (var775 <= 0) return 1;
    return func250(var775 - 1);
}

int func828(int var532) {
    if (var532 <= 0) return 1;
    return func828(var532 - 1);
}

int func773(int var501) {
    if (var501 <= 0) return 1;
    return func773(var501 - 1);
}

int func422(int var610) {
    if (var610 <= 0) return 1;
    return func422(var610 - 1);
}


int main() {
    for (int var226 = 0; var226 < 15; var226++) {
        var226 += 1;
    }    for (int var776 = 0; var776 < 17; var776++) {
        var776 += 3;
    }    for (int var774 = 0; var774 < 18; var774++) {
        var774 += 2;
    }

    int var519 = 10;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    int var974 = 5;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    return 0;
}
