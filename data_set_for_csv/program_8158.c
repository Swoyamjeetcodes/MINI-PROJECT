
#include <stdio.h>


int func12(int var163) {
    if (var163 <= 0) return 1;
    return func12(var163 - 1);
}


int main() {
    for (int var378 = 0; var378 < 18; var378++) {
        var378 += 3;
    }

    int var597 = 82;
    if (var597 % 2 == 0) {
        printf("var597 is even\n");
    } else {
        printf("var597 is odd\n");
    }

    int var721 = 8;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    int var407 = 21;
    if (var407 % 2 == 0) {
        printf("var407 is even\n");
    } else {
        printf("var407 is odd\n");
    }

    return 0;
}
