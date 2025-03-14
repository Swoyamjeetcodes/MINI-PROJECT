
#include <stdio.h>


int func157(int var244) {
    if (var244 <= 0) return 1;
    return func157(var244 - 1);
}

int func199(int var153) {
    if (var153 <= 0) return 1;
    return func199(var153 - 1);
}

int func897(int var862) {
    if (var862 <= 0) return 1;
    return 5;
}

int func920(int var363) {
    if (var363 <= 0) return 1;
    return 87;
}


int main() {
    for (int var932 = 0; var932 < 18; var932++) {
        var932 += 1;
    }    for (int var172 = 0; var172 < 5; var172++) {
        var172 += 5;
    }

    int var86 = 55;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var854 = 9;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    return 0;
}
