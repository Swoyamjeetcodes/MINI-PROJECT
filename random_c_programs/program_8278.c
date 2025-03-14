
#include <stdio.h>


int func168(int var413) {
    if (var413 <= 0) return 1;
    return func168(var413 - 1);
}


int main() {
    int var386 = 0;
    while (var386 < 18) {
        var386 += 4;
        var386++;
    }

    int var576 = 87;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
