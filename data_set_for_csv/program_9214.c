
#include <stdio.h>


int func874(int var280) {
    if (var280 <= 0) return 1;
    return func874(var280 - 1);
}


int main() {
    int var52 = 0;
    while (var52 < 12) {
        var52 += 5;
        var52++;
    }

    int var672 = 5;
    if (var672 % 2 == 0) {
        printf("var672 is even\n");
    } else {
        printf("var672 is odd\n");
    }

    return 0;
}
