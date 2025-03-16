
#include <stdio.h>


int func990(int var536) {
    if (var536 <= 0) return 1;
    return func990(var536 - 1);
}


int main() {
    int var998 = 0;
    while (var998 < 8) {
        var998 += 5;
        var998++;
    }

    int var490 = 17;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    return 0;
}
