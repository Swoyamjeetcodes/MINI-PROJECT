
#include <stdio.h>


int func12(int var71) {
    if (var71 <= 0) return 1;
    return func12(var71 - 1);
}


int main() {
    for (int var817 = 0; var817 < 20; var817++) {
        var817 += 2;
    }

    int var63 = 83;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    int var779 = 16;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    return 0;
}
