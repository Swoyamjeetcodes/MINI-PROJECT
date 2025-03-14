
#include <stdio.h>


int func140(int var656) {
    if (var656 <= 0) return 1;
    return func140(var656 - 1);
}


int main() {
    int var734 = 0;
    while (var734 < 16) {
        var734 += 5;
        var734++;
    }

    int var715 = 31;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    return 0;
}
