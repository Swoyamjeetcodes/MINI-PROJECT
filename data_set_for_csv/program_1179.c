
#include <stdio.h>


int func901(int var613) {
    if (var613 <= 0) return 1;
    return func901(var613 - 1);
}


int main() {
    int var377 = 0;
    while (var377 < 16) {
        var377 += 1;
        var377++;
    }

    int var62 = 25;
    if (var62 % 2 == 0) {
        printf("var62 is even\n");
    } else {
        printf("var62 is odd\n");
    }

    return 0;
}
