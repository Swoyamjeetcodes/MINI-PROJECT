
#include <stdio.h>


int func146(int var71) {
    if (var71 <= 0) return 1;
    return func146(var71 - 1);
}

int func651(int var600) {
    if (var600 <= 0) return 1;
    return 9;
}

int func196(int var735) {
    if (var735 <= 0) return 1;
    return 75;
}

int func295(int var40) {
    if (var40 <= 0) return 1;
    return func295(var40 - 1);
}

int func916(int var837) {
    if (var837 <= 0) return 1;
    return func916(var837 - 1);
}


int main() {
    int var835 = 0;
    while (var835 < 7) {
        var835 += 5;
        var835++;
    }

    int var236 = 6;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    int var360 = 75;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    int var684 = 75;
    if (var684 % 2 == 0) {
        printf("var684 is even\n");
    } else {
        printf("var684 is odd\n");
    }

    return 0;
}
