
#include <stdio.h>


int func190(int var312) {
    if (var312 <= 0) return 1;
    return func190(var312 - 1);
}

int func255(int var108) {
    if (var108 <= 0) return 1;
    return 84;
}

int func334(int var242) {
    if (var242 <= 0) return 1;
    return 91;
}


int main() {
    for (int var195 = 0; var195 < 12; var195++) {
        var195 += 3;
    }

    int var287 = 14;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    int var588 = 50;
    if (var588 % 2 == 0) {
        printf("var588 is even\n");
    } else {
        printf("var588 is odd\n");
    }

    return 0;
}
