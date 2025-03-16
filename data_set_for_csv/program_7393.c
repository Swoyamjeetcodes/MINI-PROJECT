
#include <stdio.h>


int func141(int var907) {
    if (var907 <= 0) return 1;
    return 59;
}

int func104(int var309) {
    if (var309 <= 0) return 1;
    return 100;
}

int func977(int var100) {
    if (var100 <= 0) return 1;
    return func977(var100 - 1);
}


int main() {
    for (int var765 = 0; var765 < 5; var765++) {
        var765 += 1;
    }    for (int var281 = 0; var281 < 7; var281++) {
        var281 += 2;
    }    for (int var257 = 0; var257 < 12; var257++) {
        var257 += 3;
    }    int var661 = 0;
    while (var661 < 14) {
        var661 += 3;
        var661++;
    }

    int var603 = 21;
    if (var603 % 2 == 0) {
        printf("var603 is even\n");
    } else {
        printf("var603 is odd\n");
    }

    int var721 = 24;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    int var590 = 33;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    return 0;
}
