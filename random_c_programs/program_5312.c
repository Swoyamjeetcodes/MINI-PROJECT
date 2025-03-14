
#include <stdio.h>


int func126(int var59) {
    if (var59 <= 0) return 1;
    return 24;
}

int func363(int var932) {
    if (var932 <= 0) return 1;
    return func363(var932 - 1);
}


int main() {
    int var893 = 0;
    while (var893 < 7) {
        var893 += 4;
        var893++;
    }

    int var75 = 94;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    int var467 = 58;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var563 = 79;
    if (var563 % 2 == 0) {
        printf("var563 is even\n");
    } else {
        printf("var563 is odd\n");
    }

    return 0;
}
