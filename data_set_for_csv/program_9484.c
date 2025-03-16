
#include <stdio.h>


int func782(int var384) {
    if (var384 <= 0) return 1;
    return func782(var384 - 1);
}


int main() {
    int var700 = 0;
    while (var700 < 14) {
        var700 += 2;
        var700++;
    }

    int var546 = 12;
    if (var546 % 2 == 0) {
        printf("var546 is even\n");
    } else {
        printf("var546 is odd\n");
    }

    return 0;
}
