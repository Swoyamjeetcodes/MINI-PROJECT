
#include <stdio.h>


int func596(int var287) {
    if (var287 <= 0) return 1;
    return 24;
}

int func424(int var855) {
    if (var855 <= 0) return 1;
    return func424(var855 - 1);
}

int func567(int var387) {
    if (var387 <= 0) return 1;
    return 28;
}


int main() {
    for (int var605 = 0; var605 < 10; var605++) {
        var605 += 4;
    }    for (int var847 = 0; var847 < 9; var847++) {
        var847 += 3;
    }    for (int var446 = 0; var446 < 17; var446++) {
        var446 += 3;
    }

    int var218 = 22;
    if (var218 % 2 == 0) {
        printf("var218 is even\n");
    } else {
        printf("var218 is odd\n");
    }

    int var597 = 44;
    if (var597 % 2 == 0) {
        printf("var597 is even\n");
    } else {
        printf("var597 is odd\n");
    }

    return 0;
}
