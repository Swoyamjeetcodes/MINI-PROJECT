
#include <stdio.h>


int func582(int var510) {
    if (var510 <= 0) return 1;
    return func582(var510 - 1);
}


int main() {
    for (int var809 = 0; var809 < 6; var809++) {
        var809 += 3;
    }

    int var340 = 53;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    return 0;
}
