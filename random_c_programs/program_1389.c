
#include <stdio.h>


int func824(int var932) {
    if (var932 <= 0) return 1;
    return func824(var932 - 1);
}


int main() {
    int var502 = 0;
    while (var502 < 7) {
        var502 += 5;
        var502++;
    }

    int var643 = 30;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
