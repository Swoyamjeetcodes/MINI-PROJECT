
#include <stdio.h>


int func785(int var825) {
    if (var825 <= 0) return 1;
    return func785(var825 - 1);
}


int main() {
    int var761 = 0;
    while (var761 < 17) {
        var761 += 1;
        var761++;
    }

    int var53 = 22;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    return 0;
}
