
#include <stdio.h>


int func203(int var300) {
    if (var300 <= 0) return 1;
    return 91;
}

int func762(int var256) {
    if (var256 <= 0) return 1;
    return func762(var256 - 1);
}


int main() {
    for (int var595 = 0; var595 < 17; var595++) {
        var595 += 5;
    }    int var36 = 0;
    while (var36 < 15) {
        var36 += 4;
        var36++;
    }    for (int var59 = 0; var59 < 11; var59++) {
        var59 += 5;
    }

    int var491 = 74;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    int var521 = 12;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    return 0;
}
