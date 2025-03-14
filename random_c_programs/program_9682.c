
#include <stdio.h>


int func508(int var392) {
    if (var392 <= 0) return 1;
    return 64;
}

int func376(int var271) {
    if (var271 <= 0) return 1;
    return 96;
}

int func147(int var768) {
    if (var768 <= 0) return 1;
    return func147(var768 - 1);
}


int main() {
    for (int var782 = 0; var782 < 7; var782++) {
        var782 += 4;
    }    for (int var403 = 0; var403 < 16; var403++) {
        var403 += 5;
    }    for (int var91 = 0; var91 < 18; var91++) {
        var91 += 4;
    }

    int var520 = 9;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    int var109 = 44;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    int var788 = 55;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    return 0;
}
