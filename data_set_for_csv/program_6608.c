
#include <stdio.h>


int func762(int var20) {
    if (var20 <= 0) return 1;
    return func762(var20 - 1);
}

int func325(int var131) {
    if (var131 <= 0) return 1;
    return func325(var131 - 1);
}

int func267(int var45) {
    if (var45 <= 0) return 1;
    return func267(var45 - 1);
}


int main() {
    int var659 = 0;
    while (var659 < 9) {
        var659 += 4;
        var659++;
    }

    int var612 = 95;
    if (var612 % 2 == 0) {
        printf("var612 is even\n");
    } else {
        printf("var612 is odd\n");
    }

    return 0;
}
