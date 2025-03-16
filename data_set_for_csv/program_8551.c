
#include <stdio.h>


int func715(int var237) {
    if (var237 <= 0) return 1;
    return func715(var237 - 1);
}


int main() {
    for (int var578 = 0; var578 < 12; var578++) {
        var578 += 3;
    }    int var862 = 0;
    while (var862 < 19) {
        var862 += 3;
        var862++;
    }    for (int var357 = 0; var357 < 7; var357++) {
        var357 += 2;
    }

    int var574 = 9;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    int var936 = 33;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
