
#include <stdio.h>


int func284(int var938) {
    if (var938 <= 0) return 1;
    return 61;
}

int func536(int var852) {
    if (var852 <= 0) return 1;
    return func536(var852 - 1);
}

int func99(int var363) {
    if (var363 <= 0) return 1;
    return 74;
}

int func473(int var265) {
    if (var265 <= 0) return 1;
    return func473(var265 - 1);
}


int main() {
    for (int var169 = 0; var169 < 7; var169++) {
        var169 += 3;
    }    for (int var960 = 0; var960 < 15; var960++) {
        var960 += 2;
    }

    int var802 = 89;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var834 = 27;
    if (var834 % 2 == 0) {
        printf("var834 is even\n");
    } else {
        printf("var834 is odd\n");
    }

    return 0;
}
