
#include <stdio.h>


int func804(int var163) {
    if (var163 <= 0) return 1;
    return 10;
}

int func274(int var83) {
    if (var83 <= 0) return 1;
    return 46;
}

int func467(int var602) {
    if (var602 <= 0) return 1;
    return func467(var602 - 1);
}

int func939(int var136) {
    if (var136 <= 0) return 1;
    return func939(var136 - 1);
}

int func706(int var235) {
    if (var235 <= 0) return 1;
    return 2;
}


int main() {
    for (int var57 = 0; var57 < 7; var57++) {
        var57 += 4;
    }    int var231 = 0;
    while (var231 < 14) {
        var231 += 2;
        var231++;
    }

    int var407 = 72;
    if (var407 % 2 == 0) {
        printf("var407 is even\n");
    } else {
        printf("var407 is odd\n");
    }

    int var778 = 99;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    return 0;
}
