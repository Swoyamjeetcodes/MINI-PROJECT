
#include <stdio.h>


int func99(int var790) {
    if (var790 <= 0) return 1;
    return func99(var790 - 1);
}


int main() {
    int var978 = 0;
    while (var978 < 14) {
        var978 += 4;
        var978++;
    }

    int var142 = 50;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
