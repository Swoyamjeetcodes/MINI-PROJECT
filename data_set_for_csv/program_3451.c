
#include <stdio.h>


int func371(int var751) {
    if (var751 <= 0) return 1;
    return func371(var751 - 1);
}


int main() {
    for (int var112 = 0; var112 < 5; var112++) {
        var112 += 5;
    }

    int var822 = 17;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}
