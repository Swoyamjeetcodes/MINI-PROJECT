
#include <stdio.h>


int func502(int var238) {
    if (var238 <= 0) return 1;
    return 42;
}

int func380(int var684) {
    if (var684 <= 0) return 1;
    return func380(var684 - 1);
}

int func624(int var64) {
    if (var64 <= 0) return 1;
    return func624(var64 - 1);
}

int func615(int var933) {
    if (var933 <= 0) return 1;
    return func615(var933 - 1);
}

int func543(int var190) {
    if (var190 <= 0) return 1;
    return func543(var190 - 1);
}


int main() {
    int var907 = 0;
    while (var907 < 12) {
        var907 += 4;
        var907++;
    }

    int var86 = 44;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var988 = 61;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    int var35 = 2;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
