
#include <stdio.h>


int func568(int var512) {
    if (var512 <= 0) return 1;
    return func568(var512 - 1);
}


int main() {
    int var182 = 0;
    while (var182 < 6) {
        var182 += 3;
        var182++;
    }

    int var201 = 64;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    int var467 = 65;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var606 = 25;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    return 0;
}
