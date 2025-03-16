
#include <stdio.h>


int func340(int var893) {
    if (var893 <= 0) return 1;
    return func340(var893 - 1);
}


int main() {
    int var540 = 0;
    while (var540 < 14) {
        var540 += 4;
        var540++;
    }

    int var452 = 12;
    if (var452 % 2 == 0) {
        printf("var452 is even\n");
    } else {
        printf("var452 is odd\n");
    }

    return 0;
}
