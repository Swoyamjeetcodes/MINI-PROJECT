
#include <stdio.h>


int func996(int var55) {
    if (var55 <= 0) return 1;
    return func996(var55 - 1);
}


int main() {
    int var566 = 0;
    while (var566 < 6) {
        var566 += 3;
        var566++;
    }

    int var103 = 87;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    return 0;
}
