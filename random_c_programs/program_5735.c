
#include <stdio.h>


int func203(int var62) {
    if (var62 <= 0) return 1;
    return func203(var62 - 1);
}


int main() {
    for (int var890 = 0; var890 < 5; var890++) {
        var890 += 2;
    }    for (int var199 = 0; var199 < 15; var199++) {
        var199 += 5;
    }

    int var855 = 88;
    if (var855 % 2 == 0) {
        printf("var855 is even\n");
    } else {
        printf("var855 is odd\n");
    }

    int var696 = 6;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    int var250 = 4;
    if (var250 % 2 == 0) {
        printf("var250 is even\n");
    } else {
        printf("var250 is odd\n");
    }

    return 0;
}
