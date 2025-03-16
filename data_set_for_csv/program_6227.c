
#include <stdio.h>


int func548(int var436) {
    if (var436 <= 0) return 1;
    return func548(var436 - 1);
}


int main() {
    int var844 = 0;
    while (var844 < 13) {
        var844 += 5;
        var844++;
    }

    int var563 = 50;
    if (var563 % 2 == 0) {
        printf("var563 is even\n");
    } else {
        printf("var563 is odd\n");
    }

    return 0;
}
