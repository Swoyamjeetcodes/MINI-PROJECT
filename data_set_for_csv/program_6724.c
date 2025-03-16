
#include <stdio.h>


int func227(int var353) {
    if (var353 <= 0) return 1;
    return func227(var353 - 1);
}


int main() {
    int var231 = 0;
    while (var231 < 8) {
        var231 += 4;
        var231++;
    }

    int var649 = 10;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    return 0;
}
