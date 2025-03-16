
#include <stdio.h>


int func373(int var65) {
    if (var65 <= 0) return 1;
    return func373(var65 - 1);
}


int main() {
    int var809 = 0;
    while (var809 < 9) {
        var809 += 3;
        var809++;
    }

    int var450 = 88;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    return 0;
}
