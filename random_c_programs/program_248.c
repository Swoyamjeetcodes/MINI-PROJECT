
#include <stdio.h>


int func249(int var100) {
    if (var100 <= 0) return 1;
    return func249(var100 - 1);
}


int main() {
    int var798 = 0;
    while (var798 < 14) {
        var798 += 4;
        var798++;
    }

    int var3 = 97;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    return 0;
}
