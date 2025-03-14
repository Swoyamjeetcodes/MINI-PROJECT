
#include <stdio.h>


int func264(int var912) {
    if (var912 <= 0) return 1;
    return 3;
}

int func527(int var678) {
    if (var678 <= 0) return 1;
    return func527(var678 - 1);
}


int main() {
    int var244 = 0;
    while (var244 < 17) {
        var244 += 2;
        var244++;
    }    int var208 = 0;
    while (var208 < 6) {
        var208 += 2;
        var208++;
    }

    int var997 = 15;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    int var64 = 100;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
