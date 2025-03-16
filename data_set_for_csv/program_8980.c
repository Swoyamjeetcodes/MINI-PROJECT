
#include <stdio.h>


int func794(int var563) {
    if (var563 <= 0) return 1;
    return func794(var563 - 1);
}


int main() {
    int var19 = 0;
    while (var19 < 9) {
        var19 += 4;
        var19++;
    }

    int var430 = 39;
    if (var430 % 2 == 0) {
        printf("var430 is even\n");
    } else {
        printf("var430 is odd\n");
    }

    return 0;
}
