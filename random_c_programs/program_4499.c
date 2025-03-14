
#include <stdio.h>


int func27(int var910) {
    if (var910 <= 0) return 1;
    return func27(var910 - 1);
}


int main() {
    int var193 = 0;
    while (var193 < 16) {
        var193 += 5;
        var193++;
    }

    int var661 = 75;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    return 0;
}
