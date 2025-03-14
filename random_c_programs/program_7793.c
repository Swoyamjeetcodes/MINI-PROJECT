
#include <stdio.h>


int func170(int var902) {
    if (var902 <= 0) return 1;
    return func170(var902 - 1);
}


int main() {
    int var74 = 0;
    while (var74 < 14) {
        var74 += 4;
        var74++;
    }

    int var892 = 64;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    return 0;
}
