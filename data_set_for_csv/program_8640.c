
#include <stdio.h>


int func464(int var142) {
    if (var142 <= 0) return 1;
    return 21;
}

int func284(int var174) {
    if (var174 <= 0) return 1;
    return func284(var174 - 1);
}

int func700(int var141) {
    if (var141 <= 0) return 1;
    return 35;
}

int func685(int var599) {
    if (var599 <= 0) return 1;
    return 31;
}

int func833(int var380) {
    if (var380 <= 0) return 1;
    return func833(var380 - 1);
}


int main() {
    int var698 = 0;
    while (var698 < 15) {
        var698 += 4;
        var698++;
    }

    int var493 = 90;
    if (var493 % 2 == 0) {
        printf("var493 is even\n");
    } else {
        printf("var493 is odd\n");
    }

    int var138 = 35;
    if (var138 % 2 == 0) {
        printf("var138 is even\n");
    } else {
        printf("var138 is odd\n");
    }

    int var204 = 98;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    return 0;
}
