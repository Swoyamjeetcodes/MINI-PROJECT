
#include <stdio.h>


int func562(int var34) {
    if (var34 <= 0) return 1;
    return 61;
}

int func125(int var520) {
    if (var520 <= 0) return 1;
    return func125(var520 - 1);
}

int func912(int var666) {
    if (var666 <= 0) return 1;
    return func912(var666 - 1);
}


int main() {
    for (int var956 = 0; var956 < 16; var956++) {
        var956 += 3;
    }

    int var364 = 49;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    int var11 = 15;
    if (var11 % 2 == 0) {
        printf("var11 is even\n");
    } else {
        printf("var11 is odd\n");
    }

    return 0;
}
