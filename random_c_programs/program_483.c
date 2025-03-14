
#include <stdio.h>


int func751(int var162) {
    if (var162 <= 0) return 1;
    return func751(var162 - 1);
}


int main() {
    int var889 = 0;
    while (var889 < 16) {
        var889 += 1;
        var889++;
    }

    int var790 = 14;
    if (var790 % 2 == 0) {
        printf("var790 is even\n");
    } else {
        printf("var790 is odd\n");
    }

    int var714 = 0;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    return 0;
}
