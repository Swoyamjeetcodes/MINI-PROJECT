
#include <stdio.h>


int func707(int var131) {
    if (var131 <= 0) return 1;
    return func707(var131 - 1);
}


int main() {
    int var578 = 0;
    while (var578 < 18) {
        var578 += 5;
        var578++;
    }

    int var50 = 62;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    return 0;
}
