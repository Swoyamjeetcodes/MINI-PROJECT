
#include <stdio.h>


int func983(int var290) {
    if (var290 <= 0) return 1;
    return func983(var290 - 1);
}


int main() {
    for (int var683 = 0; var683 < 12; var683++) {
        var683 += 5;
    }

    int var608 = 72;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    int var871 = 93;
    if (var871 % 2 == 0) {
        printf("var871 is even\n");
    } else {
        printf("var871 is odd\n");
    }

    return 0;
}
