
#include <stdio.h>


int func30(int var504) {
    if (var504 <= 0) return 1;
    return func30(var504 - 1);
}


int main() {
    int var575 = 0;
    while (var575 < 20) {
        var575 += 2;
        var575++;
    }

    int var969 = 87;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    return 0;
}
