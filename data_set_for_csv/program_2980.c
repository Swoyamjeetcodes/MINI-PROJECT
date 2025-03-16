
#include <stdio.h>


int func650(int var836) {
    if (var836 <= 0) return 1;
    return func650(var836 - 1);
}

int func790(int var986) {
    if (var986 <= 0) return 1;
    return func790(var986 - 1);
}


int main() {
    int var429 = 0;
    while (var429 < 14) {
        var429 += 4;
        var429++;
    }

    int var405 = 98;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    int var158 = 87;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    int var59 = 47;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    return 0;
}
