
#include <stdio.h>


int func776(int var399) {
    if (var399 <= 0) return 1;
    return func776(var399 - 1);
}


int main() {
    for (int var528 = 0; var528 < 13; var528++) {
        var528 += 5;
    }

    int var617 = 19;
    if (var617 % 2 == 0) {
        printf("var617 is even\n");
    } else {
        printf("var617 is odd\n");
    }

    return 0;
}
