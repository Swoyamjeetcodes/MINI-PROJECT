
#include <stdio.h>


int func721(int var444) {
    if (var444 <= 0) return 1;
    return func721(var444 - 1);
}


int main() {
    for (int var503 = 0; var503 < 18; var503++) {
        var503 += 3;
    }

    int var669 = 40;
    if (var669 % 2 == 0) {
        printf("var669 is even\n");
    } else {
        printf("var669 is odd\n");
    }

    int var534 = 27;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    int var673 = 77;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    int var371 = 77;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    return 0;
}
