
#include <stdio.h>


int func33(int var406) {
    if (var406 <= 0) return 1;
    return 10;
}

int func13(int var946) {
    if (var946 <= 0) return 1;
    return func13(var946 - 1);
}

int func132(int var209) {
    if (var209 <= 0) return 1;
    return func132(var209 - 1);
}

int func617(int var902) {
    if (var902 <= 0) return 1;
    return 96;
}


int main() {
    int var276 = 0;
    while (var276 < 6) {
        var276 += 2;
        var276++;
    }

    int var179 = 20;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    int var399 = 97;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    int var42 = 26;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
