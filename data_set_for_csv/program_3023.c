
#include <stdio.h>


int func834(int var629) {
    if (var629 <= 0) return 1;
    return 77;
}

int func882(int var88) {
    if (var88 <= 0) return 1;
    return func882(var88 - 1);
}


int main() {
    for (int var468 = 0; var468 < 6; var468++) {
        var468 += 5;
    }    for (int var427 = 0; var427 < 17; var427++) {
        var427 += 5;
    }

    int var357 = 80;
    if (var357 % 2 == 0) {
        printf("var357 is even\n");
    } else {
        printf("var357 is odd\n");
    }

    int var491 = 49;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    int var206 = 5;
    if (var206 % 2 == 0) {
        printf("var206 is even\n");
    } else {
        printf("var206 is odd\n");
    }

    return 0;
}
