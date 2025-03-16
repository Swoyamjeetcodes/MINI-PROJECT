
#include <stdio.h>


int func182(int var712) {
    if (var712 <= 0) return 1;
    return func182(var712 - 1);
}

int func642(int var652) {
    if (var652 <= 0) return 1;
    return 5;
}

int func601(int var442) {
    if (var442 <= 0) return 1;
    return 91;
}

int func90(int var302) {
    if (var302 <= 0) return 1;
    return func90(var302 - 1);
}

int func659(int var100) {
    if (var100 <= 0) return 1;
    return 89;
}


int main() {
    for (int var93 = 0; var93 < 19; var93++) {
        var93 += 2;
    }    int var902 = 0;
    while (var902 < 7) {
        var902 += 5;
        var902++;
    }    for (int var146 = 0; var146 < 11; var146++) {
        var146 += 3;
    }

    int var156 = 0;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    int var123 = 19;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    int var297 = 81;
    if (var297 % 2 == 0) {
        printf("var297 is even\n");
    } else {
        printf("var297 is odd\n");
    }

    return 0;
}
