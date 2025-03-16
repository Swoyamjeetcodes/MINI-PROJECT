
#include <stdio.h>


int func616(int var700) {
    if (var700 <= 0) return 1;
    return func616(var700 - 1);
}


int main() {
    int var44 = 0;
    while (var44 < 16) {
        var44 += 2;
        var44++;
    }

    int var749 = 79;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    return 0;
}
