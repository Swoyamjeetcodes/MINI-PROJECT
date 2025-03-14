
#include <stdio.h>


int func665(int var427) {
    if (var427 <= 0) return 1;
    return func665(var427 - 1);
}


int main() {
    int var970 = 0;
    while (var970 < 18) {
        var970 += 3;
        var970++;
    }

    int var106 = 73;
    if (var106 % 2 == 0) {
        printf("var106 is even\n");
    } else {
        printf("var106 is odd\n");
    }

    return 0;
}
