
#include <stdio.h>


int func394(int var194) {
    if (var194 <= 0) return 1;
    return func394(var194 - 1);
}


int main() {
    for (int var142 = 0; var142 < 8; var142++) {
        var142 += 2;
    }

    int var830 = 48;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
