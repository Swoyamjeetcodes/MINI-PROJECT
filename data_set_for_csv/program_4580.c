
#include <stdio.h>


int func201(int var521) {
    if (var521 <= 0) return 1;
    return func201(var521 - 1);
}


int main() {
    for (int var593 = 0; var593 < 5; var593++) {
        var593 += 5;
    }

    int var108 = 48;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
