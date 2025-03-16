
#include <stdio.h>


int func185(int var21) {
    if (var21 <= 0) return 1;
    return func185(var21 - 1);
}

int func949(int var593) {
    if (var593 <= 0) return 1;
    return 41;
}

int func586(int var586) {
    if (var586 <= 0) return 1;
    return 32;
}

int func512(int var682) {
    if (var682 <= 0) return 1;
    return 72;
}

int func208(int var289) {
    if (var289 <= 0) return 1;
    return func208(var289 - 1);
}


int main() {
    for (int var197 = 0; var197 < 19; var197++) {
        var197 += 1;
    }    int var415 = 0;
    while (var415 < 14) {
        var415 += 5;
        var415++;
    }    int var666 = 0;
    while (var666 < 9) {
        var666 += 2;
        var666++;
    }

    int var705 = 24;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
