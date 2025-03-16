
#include <stdio.h>


int func668(int var684) {
    if (var684 <= 0) return 1;
    return func668(var684 - 1);
}


int main() {
    int var995 = 0;
    while (var995 < 14) {
        var995 += 5;
        var995++;
    }

    int var636 = 80;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
