
#include <stdio.h>


int func482(int var290) {
    if (var290 <= 0) return 1;
    return func482(var290 - 1);
}


int main() {
    int var553 = 0;
    while (var553 < 9) {
        var553 += 1;
        var553++;
    }

    int var75 = 93;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    return 0;
}
