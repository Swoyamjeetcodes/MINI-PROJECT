
#include <stdio.h>


int func868(int var252) {
    if (var252 <= 0) return 1;
    return func868(var252 - 1);
}


int main() {
    int var23 = 0;
    while (var23 < 8) {
        var23 += 4;
        var23++;
    }

    int var925 = 15;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
