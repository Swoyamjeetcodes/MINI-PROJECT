
#include <stdio.h>


int func779(int var1) {
    if (var1 <= 0) return 1;
    return func779(var1 - 1);
}

int func209(int var153) {
    if (var153 <= 0) return 1;
    return 5;
}

int func536(int var417) {
    if (var417 <= 0) return 1;
    return 38;
}

int func945(int var656) {
    if (var656 <= 0) return 1;
    return func945(var656 - 1);
}


int main() {
    int var948 = 0;
    while (var948 < 9) {
        var948 += 2;
        var948++;
    }

    int var455 = 61;
    if (var455 % 2 == 0) {
        printf("var455 is even\n");
    } else {
        printf("var455 is odd\n");
    }

    int var819 = 28;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    return 0;
}
