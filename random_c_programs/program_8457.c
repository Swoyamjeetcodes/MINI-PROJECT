
#include <stdio.h>


int func188(int var500) {
    if (var500 <= 0) return 1;
    return func188(var500 - 1);
}


int main() {
    int var231 = 0;
    while (var231 < 13) {
        var231 += 3;
        var231++;
    }

    int var977 = 61;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    return 0;
}
