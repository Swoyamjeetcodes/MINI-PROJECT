
#include <stdio.h>


int func658(int var761) {
    if (var761 <= 0) return 1;
    return 16;
}

int func528(int var799) {
    if (var799 <= 0) return 1;
    return func528(var799 - 1);
}


int main() {
    int var435 = 0;
    while (var435 < 13) {
        var435 += 5;
        var435++;
    }    for (int var33 = 0; var33 < 15; var33++) {
        var33 += 4;
    }    for (int var624 = 0; var624 < 9; var624++) {
        var624 += 3;
    }

    int var414 = 21;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    int var283 = 58;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    int var570 = 30;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
