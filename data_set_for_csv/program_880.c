
#include <stdio.h>


int func500(int var768) {
    if (var768 <= 0) return 1;
    return func500(var768 - 1);
}

int func460(int var986) {
    if (var986 <= 0) return 1;
    return func460(var986 - 1);
}

int func96(int var385) {
    if (var385 <= 0) return 1;
    return func96(var385 - 1);
}

int func191(int var31) {
    if (var31 <= 0) return 1;
    return func191(var31 - 1);
}

int func379(int var606) {
    if (var606 <= 0) return 1;
    return func379(var606 - 1);
}

int func76(int var503) {
    if (var503 <= 0) return 1;
    return 2;
}


int main() {
    for (int var870 = 0; var870 < 20; var870++) {
        var870 += 3;
    }    int var102 = 0;
    while (var102 < 16) {
        var102 += 2;
        var102++;
    }    for (int var426 = 0; var426 < 9; var426++) {
        var426 += 1;
    }    int var132 = 0;
    while (var132 < 5) {
        var132 += 3;
        var132++;
    }    for (int var300 = 0; var300 < 16; var300++) {
        var300 += 2;
    }

    int var679 = 28;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    int var493 = 21;
    if (var493 % 2 == 0) {
        printf("var493 is even\n");
    } else {
        printf("var493 is odd\n");
    }

    return 0;
}
