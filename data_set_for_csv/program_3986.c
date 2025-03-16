
#include <stdio.h>


int func774(int var13) {
    if (var13 <= 0) return 1;
    return func774(var13 - 1);
}


int main() {
    for (int var928 = 0; var928 < 7; var928++) {
        var928 += 4;
    }    for (int var147 = 0; var147 < 16; var147++) {
        var147 += 3;
    }    for (int var705 = 0; var705 < 10; var705++) {
        var705 += 1;
    }    for (int var280 = 0; var280 < 20; var280++) {
        var280 += 2;
    }    int var876 = 0;
    while (var876 < 10) {
        var876 += 4;
        var876++;
    }

    int var516 = 77;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    return 0;
}
