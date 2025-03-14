
#include <stdio.h>


int func565(int var971) {
    if (var971 <= 0) return 1;
    return func565(var971 - 1);
}

int func591(int var799) {
    if (var799 <= 0) return 1;
    return 17;
}

int func800(int var987) {
    if (var987 <= 0) return 1;
    return 34;
}

int func108(int var718) {
    if (var718 <= 0) return 1;
    return 75;
}

int func731(int var469) {
    if (var469 <= 0) return 1;
    return 79;
}


int main() {
    int var444 = 0;
    while (var444 < 18) {
        var444 += 3;
        var444++;
    }    for (int var793 = 0; var793 < 19; var793++) {
        var793 += 5;
    }

    int var972 = 54;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var839 = 84;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    return 0;
}
