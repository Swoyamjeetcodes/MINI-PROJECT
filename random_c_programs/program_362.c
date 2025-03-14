
#include <stdio.h>


int func127(int var301) {
    if (var301 <= 0) return 1;
    return func127(var301 - 1);
}


int main() {
    for (int var481 = 0; var481 < 15; var481++) {
        var481 += 1;
    }

    int var357 = 42;
    if (var357 % 2 == 0) {
        printf("var357 is even\n");
    } else {
        printf("var357 is odd\n");
    }

    int var446 = 84;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    return 0;
}
