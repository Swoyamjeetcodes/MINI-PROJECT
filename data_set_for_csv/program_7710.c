
#include <stdio.h>


int func22(int var68) {
    if (var68 <= 0) return 1;
    return func22(var68 - 1);
}


int main() {
    int var419 = 0;
    while (var419 < 20) {
        var419 += 5;
        var419++;
    }

    int var775 = 4;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
