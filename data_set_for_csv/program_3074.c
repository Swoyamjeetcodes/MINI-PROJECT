
#include <stdio.h>


int func626(int var633) {
    if (var633 <= 0) return 1;
    return func626(var633 - 1);
}


int main() {
    int var612 = 0;
    while (var612 < 9) {
        var612 += 3;
        var612++;
    }

    int var869 = 18;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    return 0;
}
