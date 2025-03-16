
#include <stdio.h>


int func624(int var943) {
    if (var943 <= 0) return 1;
    return 44;
}

int func213(int var713) {
    if (var713 <= 0) return 1;
    return func213(var713 - 1);
}

int func120(int var789) {
    if (var789 <= 0) return 1;
    return func120(var789 - 1);
}


int main() {
    int var19 = 0;
    while (var19 < 12) {
        var19 += 1;
        var19++;
    }    for (int var934 = 0; var934 < 12; var934++) {
        var934 += 5;
    }

    int var896 = 71;
    if (var896 % 2 == 0) {
        printf("var896 is even\n");
    } else {
        printf("var896 is odd\n");
    }

    int var659 = 98;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    int var624 = 69;
    if (var624 % 2 == 0) {
        printf("var624 is even\n");
    } else {
        printf("var624 is odd\n");
    }

    return 0;
}
