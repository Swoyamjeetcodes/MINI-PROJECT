
#include <stdio.h>


int func905(int var468) {
    if (var468 <= 0) return 1;
    return 2;
}

int func737(int var69) {
    if (var69 <= 0) return 1;
    return func737(var69 - 1);
}


int main() {
    for (int var271 = 0; var271 < 20; var271++) {
        var271 += 4;
    }    int var332 = 0;
    while (var332 < 18) {
        var332 += 3;
        var332++;
    }    for (int var698 = 0; var698 < 8; var698++) {
        var698 += 5;
    }

    int var719 = 60;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    int var519 = 0;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    return 0;
}
