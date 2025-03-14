
#include <stdio.h>


int func980(int var295) {
    if (var295 <= 0) return 1;
    return 47;
}

int func822(int var86) {
    if (var86 <= 0) return 1;
    return func822(var86 - 1);
}


int main() {
    for (int var543 = 0; var543 < 17; var543++) {
        var543 += 4;
    }    for (int var211 = 0; var211 < 8; var211++) {
        var211 += 4;
    }    int var865 = 0;
    while (var865 < 9) {
        var865 += 3;
        var865++;
    }

    int var586 = 13;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    int var193 = 69;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    int var749 = 94;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    int var862 = 11;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
