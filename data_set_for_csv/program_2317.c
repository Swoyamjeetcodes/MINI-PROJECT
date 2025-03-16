
#include <stdio.h>


int func631(int var84) {
    if (var84 <= 0) return 1;
    return func631(var84 - 1);
}

int func737(int var199) {
    if (var199 <= 0) return 1;
    return func737(var199 - 1);
}

int func675(int var351) {
    if (var351 <= 0) return 1;
    return func675(var351 - 1);
}


int main() {
    for (int var240 = 0; var240 < 16; var240++) {
        var240 += 3;
    }

    int var2 = 91;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    int var291 = 98;
    if (var291 % 2 == 0) {
        printf("var291 is even\n");
    } else {
        printf("var291 is odd\n");
    }

    int var746 = 41;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    int var164 = 53;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    int var71 = 37;
    if (var71 % 2 == 0) {
        printf("var71 is even\n");
    } else {
        printf("var71 is odd\n");
    }

    int var130 = 22;
    if (var130 % 2 == 0) {
        printf("var130 is even\n");
    } else {
        printf("var130 is odd\n");
    }

    return 0;
}
