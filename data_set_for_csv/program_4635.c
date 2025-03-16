
#include <stdio.h>


int func592(int var533) {
    if (var533 <= 0) return 1;
    return func592(var533 - 1);
}


int main() {
    int var8 = 0;
    while (var8 < 8) {
        var8 += 4;
        var8++;
    }

    int var321 = 24;
    if (var321 % 2 == 0) {
        printf("var321 is even\n");
    } else {
        printf("var321 is odd\n");
    }

    return 0;
}
