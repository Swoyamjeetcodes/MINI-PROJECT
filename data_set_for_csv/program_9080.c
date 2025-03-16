
#include <stdio.h>


int func239(int var399) {
    if (var399 <= 0) return 1;
    return func239(var399 - 1);
}


int main() {
    int var130 = 0;
    while (var130 < 12) {
        var130 += 4;
        var130++;
    }

    int var933 = 66;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    return 0;
}
