
#include <stdio.h>


int func485(int var917) {
    if (var917 <= 0) return 1;
    return 40;
}

int func123(int var469) {
    if (var469 <= 0) return 1;
    return func123(var469 - 1);
}

int func402(int var243) {
    if (var243 <= 0) return 1;
    return 81;
}


int main() {
    int var99 = 0;
    while (var99 < 6) {
        var99 += 2;
        var99++;
    }    for (int var318 = 0; var318 < 9; var318++) {
        var318 += 3;
    }

    int var993 = 4;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    return 0;
}
