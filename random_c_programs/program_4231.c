
#include <stdio.h>


int func613(int var134) {
    if (var134 <= 0) return 1;
    return func613(var134 - 1);
}

int func605(int var157) {
    if (var157 <= 0) return 1;
    return 11;
}


int main() {
    for (int var20 = 0; var20 < 10; var20++) {
        var20 += 1;
    }

    int var779 = 58;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    int var528 = 29;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    int var395 = 97;
    if (var395 % 2 == 0) {
        printf("var395 is even\n");
    } else {
        printf("var395 is odd\n");
    }

    return 0;
}
