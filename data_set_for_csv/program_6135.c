
#include <stdio.h>


int func36(int var750) {
    if (var750 <= 0) return 1;
    return func36(var750 - 1);
}


int main() {
    int var526 = 0;
    while (var526 < 13) {
        var526 += 3;
        var526++;
    }

    int var86 = 63;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
