
#include <stdio.h>


int func18(int var960) {
    if (var960 <= 0) return 1;
    return func18(var960 - 1);
}


int main() {
    int var827 = 0;
    while (var827 < 20) {
        var827 += 2;
        var827++;
    }

    int var576 = 38;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
