
#include <stdio.h>


int func862(int var712) {
    if (var712 <= 0) return 1;
    return func862(var712 - 1);
}


int main() {
    for (int var586 = 0; var586 < 6; var586++) {
        var586 += 5;
    }

    int var802 = 73;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
