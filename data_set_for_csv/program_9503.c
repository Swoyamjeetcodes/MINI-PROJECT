
#include <stdio.h>


int func458(int var331) {
    if (var331 <= 0) return 1;
    return func458(var331 - 1);
}

int func754(int var600) {
    if (var600 <= 0) return 1;
    return func754(var600 - 1);
}


int main() {
    for (int var674 = 0; var674 < 18; var674++) {
        var674 += 3;
    }    int var690 = 0;
    while (var690 < 11) {
        var690 += 4;
        var690++;
    }    for (int var356 = 0; var356 < 5; var356++) {
        var356 += 2;
    }

    int var34 = 5;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    int var35 = 92;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
