
#include <stdio.h>


int func729(int var755) {
    if (var755 <= 0) return 1;
    return 75;
}

int func931(int var98) {
    if (var98 <= 0) return 1;
    return 52;
}

int func883(int var663) {
    if (var663 <= 0) return 1;
    return func883(var663 - 1);
}

int func579(int var111) {
    if (var111 <= 0) return 1;
    return func579(var111 - 1);
}

int func794(int var582) {
    if (var582 <= 0) return 1;
    return func794(var582 - 1);
}


int main() {
    for (int var803 = 0; var803 < 17; var803++) {
        var803 += 4;
    }    int var83 = 0;
    while (var83 < 5) {
        var83 += 5;
        var83++;
    }    int var527 = 0;
    while (var527 < 12) {
        var527 += 4;
        var527++;
    }

    int var73 = 51;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    int var118 = 16;
    if (var118 % 2 == 0) {
        printf("var118 is even\n");
    } else {
        printf("var118 is odd\n");
    }

    return 0;
}
