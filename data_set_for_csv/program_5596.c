
#include <stdio.h>


int func801(int var225) {
    if (var225 <= 0) return 1;
    return func801(var225 - 1);
}


int main() {
    int var621 = 0;
    while (var621 < 10) {
        var621 += 5;
        var621++;
    }

    int var822 = 79;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}
