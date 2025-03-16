
#include <stdio.h>


int func589(int var470) {
    if (var470 <= 0) return 1;
    return 59;
}

int func680(int var124) {
    if (var124 <= 0) return 1;
    return func680(var124 - 1);
}

int func271(int var908) {
    if (var908 <= 0) return 1;
    return func271(var908 - 1);
}

int func600(int var857) {
    if (var857 <= 0) return 1;
    return 35;
}


int main() {
    int var41 = 0;
    while (var41 < 14) {
        var41 += 3;
        var41++;
    }

    int var972 = 78;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    return 0;
}
