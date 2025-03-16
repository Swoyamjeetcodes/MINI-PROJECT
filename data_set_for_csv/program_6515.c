
#include <stdio.h>


int func706(int var875) {
    if (var875 <= 0) return 1;
    return 28;
}

int func626(int var490) {
    if (var490 <= 0) return 1;
    return func626(var490 - 1);
}

int func83(int var32) {
    if (var32 <= 0) return 1;
    return 34;
}

int func410(int var89) {
    if (var89 <= 0) return 1;
    return func410(var89 - 1);
}

int func680(int var187) {
    if (var187 <= 0) return 1;
    return func680(var187 - 1);
}

int func339(int var269) {
    if (var269 <= 0) return 1;
    return func339(var269 - 1);
}


int main() {
    for (int var743 = 0; var743 < 9; var743++) {
        var743 += 3;
    }    for (int var145 = 0; var145 < 7; var145++) {
        var145 += 5;
    }    for (int var591 = 0; var591 < 12; var591++) {
        var591 += 4;
    }    int var707 = 0;
    while (var707 < 7) {
        var707 += 2;
        var707++;
    }

    int var893 = 36;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    int var20 = 9;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    int var854 = 6;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    int var2 = 35;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    return 0;
}
