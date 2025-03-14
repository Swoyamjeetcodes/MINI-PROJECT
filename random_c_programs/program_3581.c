
#include <stdio.h>


int func195(int var657) {
    if (var657 <= 0) return 1;
    return 22;
}

int func229(int var741) {
    if (var741 <= 0) return 1;
    return func229(var741 - 1);
}

int func722(int var820) {
    if (var820 <= 0) return 1;
    return 4;
}

int func532(int var396) {
    if (var396 <= 0) return 1;
    return 66;
}


int main() {
    for (int var527 = 0; var527 < 17; var527++) {
        var527 += 3;
    }    for (int var147 = 0; var147 < 18; var147++) {
        var147 += 5;
    }    for (int var436 = 0; var436 < 14; var436++) {
        var436 += 4;
    }

    int var877 = 81;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    return 0;
}
