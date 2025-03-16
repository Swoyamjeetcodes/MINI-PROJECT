
#include <stdio.h>


int func175(int var932) {
    if (var932 <= 0) return 1;
    return 73;
}

int func440(int var75) {
    if (var75 <= 0) return 1;
    return func440(var75 - 1);
}


int main() {
    int var578 = 0;
    while (var578 < 15) {
        var578 += 2;
        var578++;
    }    int var202 = 0;
    while (var202 < 6) {
        var202 += 3;
        var202++;
    }    for (int var886 = 0; var886 < 20; var886++) {
        var886 += 2;
    }

    int var899 = 21;
    if (var899 % 2 == 0) {
        printf("var899 is even\n");
    } else {
        printf("var899 is odd\n");
    }

    int var851 = 38;
    if (var851 % 2 == 0) {
        printf("var851 is even\n");
    } else {
        printf("var851 is odd\n");
    }

    int var406 = 29;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    return 0;
}
