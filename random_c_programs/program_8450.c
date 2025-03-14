
#include <stdio.h>


int func566(int var783) {
    if (var783 <= 0) return 1;
    return func566(var783 - 1);
}


int main() {
    int var3 = 0;
    while (var3 < 11) {
        var3 += 1;
        var3++;
    }

    int var374 = 14;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    return 0;
}
