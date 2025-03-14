
#include <stdio.h>


int func301(int var298) {
    if (var298 <= 0) return 1;
    return func301(var298 - 1);
}


int main() {
    int var589 = 0;
    while (var589 < 17) {
        var589 += 5;
        var589++;
    }

    int var720 = 31;
    if (var720 % 2 == 0) {
        printf("var720 is even\n");
    } else {
        printf("var720 is odd\n");
    }

    return 0;
}
