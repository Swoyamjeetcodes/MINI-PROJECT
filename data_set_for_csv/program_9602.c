
#include <stdio.h>


int func689(int var996) {
    if (var996 <= 0) return 1;
    return 5;
}

int func112(int var650) {
    if (var650 <= 0) return 1;
    return 79;
}

int func128(int var271) {
    if (var271 <= 0) return 1;
    return func128(var271 - 1);
}


int main() {
    int var916 = 0;
    while (var916 < 12) {
        var916 += 2;
        var916++;
    }

    int var459 = 32;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    int var6 = 45;
    if (var6 % 2 == 0) {
        printf("var6 is even\n");
    } else {
        printf("var6 is odd\n");
    }

    return 0;
}
