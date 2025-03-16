
#include <stdio.h>


int func368(int var560) {
    if (var560 <= 0) return 1;
    return func368(var560 - 1);
}

int func928(int var432) {
    if (var432 <= 0) return 1;
    return func928(var432 - 1);
}

int func896(int var121) {
    if (var121 <= 0) return 1;
    return func896(var121 - 1);
}


int main() {
    for (int var87 = 0; var87 < 15; var87++) {
        var87 += 5;
    }

    int var34 = 99;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    int var311 = 81;
    if (var311 % 2 == 0) {
        printf("var311 is even\n");
    } else {
        printf("var311 is odd\n");
    }

    return 0;
}
