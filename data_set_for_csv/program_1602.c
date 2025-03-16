
#include <stdio.h>


int func762(int var117) {
    if (var117 <= 0) return 1;
    return 89;
}

int func865(int var932) {
    if (var932 <= 0) return 1;
    return func865(var932 - 1);
}

int func926(int var859) {
    if (var859 <= 0) return 1;
    return 33;
}

int func71(int var885) {
    if (var885 <= 0) return 1;
    return 84;
}


int main() {
    for (int var467 = 0; var467 < 19; var467++) {
        var467 += 2;
    }    for (int var842 = 0; var842 < 19; var842++) {
        var842 += 3;
    }    int var920 = 0;
    while (var920 < 10) {
        var920 += 3;
        var920++;
    }

    int var268 = 90;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    int var325 = 36;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    int var88 = 21;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
