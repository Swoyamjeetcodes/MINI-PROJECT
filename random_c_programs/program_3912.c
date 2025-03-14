
#include <stdio.h>


int func939(int var44) {
    if (var44 <= 0) return 1;
    return func939(var44 - 1);
}


int main() {
    int var565 = 0;
    while (var565 < 9) {
        var565 += 1;
        var565++;
    }

    int var117 = 84;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
