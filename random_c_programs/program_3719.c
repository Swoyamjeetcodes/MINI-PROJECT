
#include <stdio.h>


int func512(int var519) {
    if (var519 <= 0) return 1;
    return func512(var519 - 1);
}


int main() {
    int var255 = 0;
    while (var255 < 5) {
        var255 += 1;
        var255++;
    }

    int var660 = 80;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    return 0;
}
