
#include <stdio.h>


int func939(int var855) {
    if (var855 <= 0) return 1;
    return func939(var855 - 1);
}


int main() {
    int var351 = 0;
    while (var351 < 17) {
        var351 += 3;
        var351++;
    }

    int var332 = 4;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
