
#include <stdio.h>


int func703(int var85) {
    if (var85 <= 0) return 1;
    return func703(var85 - 1);
}

int func964(int var196) {
    if (var196 <= 0) return 1;
    return func964(var196 - 1);
}


int main() {
    int var854 = 0;
    while (var854 < 15) {
        var854 += 3;
        var854++;
    }    int var673 = 0;
    while (var673 < 5) {
        var673 += 4;
        var673++;
    }

    int var715 = 43;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    int var35 = 97;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    int var745 = 27;
    if (var745 % 2 == 0) {
        printf("var745 is even\n");
    } else {
        printf("var745 is odd\n");
    }

    return 0;
}
