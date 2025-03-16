
#include <stdio.h>


int func238(int var436) {
    if (var436 <= 0) return 1;
    return 71;
}

int func980(int var8) {
    if (var8 <= 0) return 1;
    return func980(var8 - 1);
}

int func115(int var745) {
    if (var745 <= 0) return 1;
    return 94;
}

int func969(int var611) {
    if (var611 <= 0) return 1;
    return func969(var611 - 1);
}

int func798(int var812) {
    if (var812 <= 0) return 1;
    return 64;
}


int main() {
    for (int var197 = 0; var197 < 15; var197++) {
        var197 += 2;
    }    for (int var407 = 0; var407 < 8; var407++) {
        var407 += 3;
    }

    int var989 = 11;
    if (var989 % 2 == 0) {
        printf("var989 is even\n");
    } else {
        printf("var989 is odd\n");
    }

    return 0;
}
