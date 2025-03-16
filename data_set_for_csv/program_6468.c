
#include <stdio.h>


int func73(int var966) {
    if (var966 <= 0) return 1;
    return func73(var966 - 1);
}

int func408(int var27) {
    if (var27 <= 0) return 1;
    return 25;
}

int func945(int var800) {
    if (var800 <= 0) return 1;
    return 19;
}

int func431(int var776) {
    if (var776 <= 0) return 1;
    return 25;
}

int func804(int var444) {
    if (var444 <= 0) return 1;
    return func804(var444 - 1);
}


int main() {
    int var836 = 0;
    while (var836 < 7) {
        var836 += 4;
        var836++;
    }

    int var201 = 65;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    int var70 = 93;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    return 0;
}
