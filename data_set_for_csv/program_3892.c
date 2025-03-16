
#include <stdio.h>


int func617(int var573) {
    if (var573 <= 0) return 1;
    return func617(var573 - 1);
}

int func634(int var948) {
    if (var948 <= 0) return 1;
    return func634(var948 - 1);
}


int main() {
    int var15 = 0;
    while (var15 < 10) {
        var15 += 1;
        var15++;
    }    for (int var420 = 0; var420 < 15; var420++) {
        var420 += 2;
    }

    int var217 = 9;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    int var302 = 77;
    if (var302 % 2 == 0) {
        printf("var302 is even\n");
    } else {
        printf("var302 is odd\n");
    }

    int var792 = 45;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    return 0;
}
