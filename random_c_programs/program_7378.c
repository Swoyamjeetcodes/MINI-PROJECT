
#include <stdio.h>


int func57(int var325) {
    if (var325 <= 0) return 1;
    return func57(var325 - 1);
}


int main() {
    for (int var194 = 0; var194 < 11; var194++) {
        var194 += 3;
    }    for (int var745 = 0; var745 < 16; var745++) {
        var745 += 3;
    }

    int var247 = 11;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    int var571 = 82;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    int var653 = 32;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    return 0;
}
