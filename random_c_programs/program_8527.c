
#include <stdio.h>


int func487(int var834) {
    if (var834 <= 0) return 1;
    return func487(var834 - 1);
}


int main() {
    for (int var360 = 0; var360 < 9; var360++) {
        var360 += 4;
    }

    int var96 = 8;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
