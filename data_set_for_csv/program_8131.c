
#include <stdio.h>


int func533(int var530) {
    if (var530 <= 0) return 1;
    return func533(var530 - 1);
}


int main() {
    int var88 = 0;
    while (var88 < 14) {
        var88 += 4;
        var88++;
    }

    int var893 = 37;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    return 0;
}
