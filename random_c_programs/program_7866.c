
#include <stdio.h>


int func785(int var704) {
    if (var704 <= 0) return 1;
    return func785(var704 - 1);
}


int main() {
    for (int var828 = 0; var828 < 9; var828++) {
        var828 += 3;
    }

    int var643 = 9;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
