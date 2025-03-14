
#include <stdio.h>


int func540(int var379) {
    if (var379 <= 0) return 1;
    return func540(var379 - 1);
}


int main() {
    int var983 = 0;
    while (var983 < 8) {
        var983 += 4;
        var983++;
    }

    int var855 = 74;
    if (var855 % 2 == 0) {
        printf("var855 is even\n");
    } else {
        printf("var855 is odd\n");
    }

    return 0;
}
