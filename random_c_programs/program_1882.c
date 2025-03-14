
#include <stdio.h>


int func47(int var617) {
    if (var617 <= 0) return 1;
    return func47(var617 - 1);
}

int func707(int var827) {
    if (var827 <= 0) return 1;
    return func707(var827 - 1);
}


int main() {
    for (int var570 = 0; var570 < 10; var570++) {
        var570 += 2;
    }

    int var307 = 11;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    int var486 = 54;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
