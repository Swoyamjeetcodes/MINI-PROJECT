
#include <stdio.h>


int func709(int var539) {
    if (var539 <= 0) return 1;
    return func709(var539 - 1);
}

int func939(int var317) {
    if (var317 <= 0) return 1;
    return func939(var317 - 1);
}


int main() {
    int var980 = 0;
    while (var980 < 9) {
        var980 += 4;
        var980++;
    }    for (int var720 = 0; var720 < 8; var720++) {
        var720 += 3;
    }

    int var400 = 92;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var861 = 85;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    int var627 = 76;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var755 = 78;
    if (var755 % 2 == 0) {
        printf("var755 is even\n");
    } else {
        printf("var755 is odd\n");
    }

    int var335 = 3;
    if (var335 % 2 == 0) {
        printf("var335 is even\n");
    } else {
        printf("var335 is odd\n");
    }

    return 0;
}
