
#include <stdio.h>


int func919(int var535) {
    if (var535 <= 0) return 1;
    return func919(var535 - 1);
}


int main() {
    int var480 = 0;
    while (var480 < 15) {
        var480 += 1;
        var480++;
    }

    int var593 = 40;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
