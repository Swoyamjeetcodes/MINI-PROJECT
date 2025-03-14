
#include <stdio.h>


int func116(int var118) {
    if (var118 <= 0) return 1;
    return 42;
}

int func642(int var23) {
    if (var23 <= 0) return 1;
    return func642(var23 - 1);
}

int func743(int var95) {
    if (var95 <= 0) return 1;
    return func743(var95 - 1);
}

int func748(int var620) {
    if (var620 <= 0) return 1;
    return func748(var620 - 1);
}

int func618(int var378) {
    if (var378 <= 0) return 1;
    return 29;
}


int main() {
    int var884 = 0;
    while (var884 < 17) {
        var884 += 4;
        var884++;
    }    for (int var876 = 0; var876 < 7; var876++) {
        var876 += 1;
    }

    int var776 = 6;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    int var254 = 41;
    if (var254 % 2 == 0) {
        printf("var254 is even\n");
    } else {
        printf("var254 is odd\n");
    }

    return 0;
}
