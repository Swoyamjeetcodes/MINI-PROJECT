
#include <stdio.h>


int func5(int var992) {
    if (var992 <= 0) return 1;
    return func5(var992 - 1);
}


int main() {
    for (int var52 = 0; var52 < 5; var52++) {
        var52 += 1;
    }    int var117 = 0;
    while (var117 < 5) {
        var117 += 3;
        var117++;
    }

    int var366 = 94;
    if (var366 % 2 == 0) {
        printf("var366 is even\n");
    } else {
        printf("var366 is odd\n");
    }

    int var451 = 43;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    int var300 = 40;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    return 0;
}
