
#include <stdio.h>


int func874(int var47) {
    if (var47 <= 0) return 1;
    return func874(var47 - 1);
}


int main() {
    for (int var715 = 0; var715 < 14; var715++) {
        var715 += 2;
    }

    int var324 = 92;
    if (var324 % 2 == 0) {
        printf("var324 is even\n");
    } else {
        printf("var324 is odd\n");
    }

    return 0;
}
