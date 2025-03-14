
#include <stdio.h>


int func724(int var524) {
    if (var524 <= 0) return 1;
    return func724(var524 - 1);
}


int main() {
    int var285 = 0;
    while (var285 < 11) {
        var285 += 4;
        var285++;
    }

    int var42 = 79;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
