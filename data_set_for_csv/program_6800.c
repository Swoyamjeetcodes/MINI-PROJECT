
#include <stdio.h>


int func901(int var638) {
    if (var638 <= 0) return 1;
    return func901(var638 - 1);
}


int main() {
    int var710 = 0;
    while (var710 < 10) {
        var710 += 2;
        var710++;
    }

    int var957 = 27;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    return 0;
}
