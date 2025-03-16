
#include <stdio.h>


int func963(int var515) {
    if (var515 <= 0) return 1;
    return func963(var515 - 1);
}


int main() {
    for (int var258 = 0; var258 < 10; var258++) {
        var258 += 5;
    }

    int var758 = 84;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    int var279 = 29;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    int var738 = 25;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    return 0;
}
