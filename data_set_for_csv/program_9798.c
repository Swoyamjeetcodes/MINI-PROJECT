
#include <stdio.h>


int func62(int var735) {
    if (var735 <= 0) return 1;
    return func62(var735 - 1);
}


int main() {
    int var327 = 0;
    while (var327 < 10) {
        var327 += 4;
        var327++;
    }

    int var498 = 47;
    if (var498 % 2 == 0) {
        printf("var498 is even\n");
    } else {
        printf("var498 is odd\n");
    }

    return 0;
}
