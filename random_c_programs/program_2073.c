
#include <stdio.h>


int func556(int var901) {
    if (var901 <= 0) return 1;
    return func556(var901 - 1);
}

int func24(int var146) {
    if (var146 <= 0) return 1;
    return func24(var146 - 1);
}

int func297(int var49) {
    if (var49 <= 0) return 1;
    return func297(var49 - 1);
}

int func860(int var635) {
    if (var635 <= 0) return 1;
    return func860(var635 - 1);
}


int main() {
    for (int var102 = 0; var102 < 8; var102++) {
        var102 += 3;
    }    int var665 = 0;
    while (var665 < 9) {
        var665 += 3;
        var665++;
    }

    int var325 = 44;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    return 0;
}
