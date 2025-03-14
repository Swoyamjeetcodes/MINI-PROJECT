
#include <stdio.h>


int func964(int var573) {
    if (var573 <= 0) return 1;
    return 44;
}

int func485(int var121) {
    if (var121 <= 0) return 1;
    return 18;
}

int func417(int var871) {
    if (var871 <= 0) return 1;
    return func417(var871 - 1);
}


int main() {
    int var785 = 0;
    while (var785 < 6) {
        var785 += 4;
        var785++;
    }    int var31 = 0;
    while (var31 < 16) {
        var31 += 3;
        var31++;
    }

    int var692 = 35;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    int var548 = 75;
    if (var548 % 2 == 0) {
        printf("var548 is even\n");
    } else {
        printf("var548 is odd\n");
    }

    int var177 = 42;
    if (var177 % 2 == 0) {
        printf("var177 is even\n");
    } else {
        printf("var177 is odd\n");
    }

    return 0;
}
