
#include <stdio.h>


int func220(int var619) {
    if (var619 <= 0) return 1;
    return func220(var619 - 1);
}

int func420(int var600) {
    if (var600 <= 0) return 1;
    return 88;
}


int main() {
    for (int var406 = 0; var406 < 16; var406++) {
        var406 += 4;
    }    for (int var313 = 0; var313 < 13; var313++) {
        var313 += 4;
    }    for (int var1 = 0; var1 < 5; var1++) {
        var1 += 1;
    }

    int var759 = 50;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    return 0;
}
