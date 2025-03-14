
#include <stdio.h>


int func720(int var978) {
    if (var978 <= 0) return 1;
    return func720(var978 - 1);
}


int main() {
    int var470 = 0;
    while (var470 < 14) {
        var470 += 5;
        var470++;
    }

    int var760 = 72;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    return 0;
}
