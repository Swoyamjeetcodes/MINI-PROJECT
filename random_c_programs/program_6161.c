
#include <stdio.h>


int func134(int var330) {
    if (var330 <= 0) return 1;
    return func134(var330 - 1);
}


int main() {
    int var595 = 0;
    while (var595 < 18) {
        var595 += 5;
        var595++;
    }    for (int var280 = 0; var280 < 15; var280++) {
        var280 += 2;
    }

    int var271 = 42;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    int var636 = 82;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
