
#include <stdio.h>


int func730(int var841) {
    if (var841 <= 0) return 1;
    return func730(var841 - 1);
}


int main() {
    int var780 = 0;
    while (var780 < 7) {
        var780 += 4;
        var780++;
    }

    int var519 = 28;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    return 0;
}
