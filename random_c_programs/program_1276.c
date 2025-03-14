
#include <stdio.h>


int func37(int var772) {
    if (var772 <= 0) return 1;
    return func37(var772 - 1);
}

int func884(int var152) {
    if (var152 <= 0) return 1;
    return 98;
}

int func216(int var393) {
    if (var393 <= 0) return 1;
    return func216(var393 - 1);
}


int main() {
    for (int var347 = 0; var347 < 14; var347++) {
        var347 += 5;
    }    for (int var151 = 0; var151 < 12; var151++) {
        var151 += 1;
    }

    int var359 = 55;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    int var556 = 0;
    if (var556 % 2 == 0) {
        printf("var556 is even\n");
    } else {
        printf("var556 is odd\n");
    }

    int var725 = 41;
    if (var725 % 2 == 0) {
        printf("var725 is even\n");
    } else {
        printf("var725 is odd\n");
    }

    return 0;
}
