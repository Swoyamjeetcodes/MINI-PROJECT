
#include <stdio.h>


int func720(int var477) {
    if (var477 <= 0) return 1;
    return func720(var477 - 1);
}


int main() {
    int var788 = 0;
    while (var788 < 18) {
        var788 += 3;
        var788++;
    }    for (int var846 = 0; var846 < 8; var846++) {
        var846 += 4;
    }

    int var33 = 12;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var876 = 88;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    int var810 = 90;
    if (var810 % 2 == 0) {
        printf("var810 is even\n");
    } else {
        printf("var810 is odd\n");
    }

    return 0;
}
