
#include <stdio.h>


int func577(int var419) {
    if (var419 <= 0) return 1;
    return func577(var419 - 1);
}


int main() {
    for (int var242 = 0; var242 < 15; var242++) {
        var242 += 3;
    }

    int var822 = 93;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}
