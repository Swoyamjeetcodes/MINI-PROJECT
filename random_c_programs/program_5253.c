
#include <stdio.h>


int func82(int var988) {
    if (var988 <= 0) return 1;
    return func82(var988 - 1);
}

int func224(int var1000) {
    if (var1000 <= 0) return 1;
    return 8;
}

int func19(int var320) {
    if (var320 <= 0) return 1;
    return 81;
}


int main() {
    for (int var158 = 0; var158 < 6; var158++) {
        var158 += 3;
    }

    int var154 = 24;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    int var142 = 56;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
