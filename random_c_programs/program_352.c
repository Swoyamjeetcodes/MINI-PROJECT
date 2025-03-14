
#include <stdio.h>


int func560(int var648) {
    if (var648 <= 0) return 1;
    return func560(var648 - 1);
}


int main() {
    int var178 = 0;
    while (var178 < 20) {
        var178 += 1;
        var178++;
    }

    int var727 = 32;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    return 0;
}
