
#include <stdio.h>


int func672(int var246) {
    if (var246 <= 0) return 1;
    return func672(var246 - 1);
}


int main() {
    int var211 = 0;
    while (var211 < 13) {
        var211 += 1;
        var211++;
    }

    int var202 = 16;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    return 0;
}
