
#include <stdio.h>


int func769(int var919) {
    if (var919 <= 0) return 1;
    return func769(var919 - 1);
}


int main() {
    int var801 = 0;
    while (var801 < 20) {
        var801 += 4;
        var801++;
    }

    int var999 = 44;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    return 0;
}
