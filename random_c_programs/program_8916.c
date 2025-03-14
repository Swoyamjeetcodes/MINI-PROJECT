
#include <stdio.h>


int func434(int var516) {
    if (var516 <= 0) return 1;
    return func434(var516 - 1);
}


int main() {
    int var665 = 0;
    while (var665 < 15) {
        var665 += 1;
        var665++;
    }

    int var3 = 61;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    return 0;
}
