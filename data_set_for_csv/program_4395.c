
#include <stdio.h>


int func466(int var883) {
    if (var883 <= 0) return 1;
    return func466(var883 - 1);
}


int main() {
    for (int var821 = 0; var821 < 19; var821++) {
        var821 += 2;
    }

    int var654 = 32;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    return 0;
}
