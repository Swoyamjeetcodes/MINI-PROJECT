
#include <stdio.h>


int func207(int var308) {
    if (var308 <= 0) return 1;
    return func207(var308 - 1);
}

int func713(int var678) {
    if (var678 <= 0) return 1;
    return func713(var678 - 1);
}

int func754(int var242) {
    if (var242 <= 0) return 1;
    return func754(var242 - 1);
}


int main() {
    for (int var24 = 0; var24 < 18; var24++) {
        var24 += 1;
    }    for (int var499 = 0; var499 < 16; var499++) {
        var499 += 4;
    }    int var826 = 0;
    while (var826 < 13) {
        var826 += 2;
        var826++;
    }

    int var168 = 44;
    if (var168 % 2 == 0) {
        printf("var168 is even\n");
    } else {
        printf("var168 is odd\n");
    }

    int var100 = 33;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
