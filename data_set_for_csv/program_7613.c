
#include <stdio.h>


int func887(int var128) {
    if (var128 <= 0) return 1;
    return func887(var128 - 1);
}


int main() {
    int var98 = 0;
    while (var98 < 15) {
        var98 += 1;
        var98++;
    }

    int var372 = 64;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    return 0;
}
