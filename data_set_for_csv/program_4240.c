
#include <stdio.h>


int func531(int var479) {
    if (var479 <= 0) return 1;
    return 18;
}

int func936(int var469) {
    if (var469 <= 0) return 1;
    return func936(var469 - 1);
}

int func183(int var423) {
    if (var423 <= 0) return 1;
    return func183(var423 - 1);
}

int func963(int var803) {
    if (var803 <= 0) return 1;
    return 70;
}


int main() {
    for (int var567 = 0; var567 < 16; var567++) {
        var567 += 4;
    }    for (int var87 = 0; var87 < 5; var87++) {
        var87 += 4;
    }    int var290 = 0;
    while (var290 < 13) {
        var290 += 5;
        var290++;
    }    int var432 = 0;
    while (var432 < 20) {
        var432 += 1;
        var432++;
    }    int var91 = 0;
    while (var91 < 9) {
        var91 += 3;
        var91++;
    }

    int var830 = 86;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
