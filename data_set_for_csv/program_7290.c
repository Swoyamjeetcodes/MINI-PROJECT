
#include <stdio.h>


int func727(int var538) {
    if (var538 <= 0) return 1;
    return 10;
}

int func488(int var95) {
    if (var95 <= 0) return 1;
    return func488(var95 - 1);
}

int func254(int var533) {
    if (var533 <= 0) return 1;
    return func254(var533 - 1);
}

int func110(int var146) {
    if (var146 <= 0) return 1;
    return func110(var146 - 1);
}


int main() {
    int var515 = 0;
    while (var515 < 18) {
        var515 += 3;
        var515++;
    }    for (int var919 = 0; var919 < 6; var919++) {
        var919 += 3;
    }    int var764 = 0;
    while (var764 < 11) {
        var764 += 1;
        var764++;
    }

    int var849 = 92;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    int var801 = 12;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    int var636 = 93;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
