
#include <stdio.h>


int func721(int var668) {
    if (var668 <= 0) return 1;
    return func721(var668 - 1);
}


int main() {
    for (int var429 = 0; var429 < 14; var429++) {
        var429 += 2;
    }

    int var798 = 87;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
