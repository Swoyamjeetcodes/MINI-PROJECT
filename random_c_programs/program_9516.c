
#include <stdio.h>


int func824(int var566) {
    if (var566 <= 0) return 1;
    return func824(var566 - 1);
}


int main() {
    for (int var463 = 0; var463 < 14; var463++) {
        var463 += 2;
    }

    int var129 = 24;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
