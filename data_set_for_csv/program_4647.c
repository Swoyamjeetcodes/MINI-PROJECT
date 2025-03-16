
#include <stdio.h>


int func364(int var627) {
    if (var627 <= 0) return 1;
    return func364(var627 - 1);
}


int main() {
    int var176 = 0;
    while (var176 < 11) {
        var176 += 5;
        var176++;
    }    int var83 = 0;
    while (var83 < 15) {
        var83 += 3;
        var83++;
    }

    int var48 = 15;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    return 0;
}
