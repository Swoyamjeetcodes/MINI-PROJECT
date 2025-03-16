
#include <stdio.h>


int func852(int var387) {
    if (var387 <= 0) return 1;
    return func852(var387 - 1);
}


int main() {
    int var493 = 0;
    while (var493 < 20) {
        var493 += 1;
        var493++;
    }

    int var105 = 100;
    if (var105 % 2 == 0) {
        printf("var105 is even\n");
    } else {
        printf("var105 is odd\n");
    }

    return 0;
}
