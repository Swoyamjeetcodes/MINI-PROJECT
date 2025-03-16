
#include <stdio.h>


int func589(int var465) {
    if (var465 <= 0) return 1;
    return func589(var465 - 1);
}


int main() {
    int var946 = 0;
    while (var946 < 9) {
        var946 += 2;
        var946++;
    }

    int var825 = 82;
    if (var825 % 2 == 0) {
        printf("var825 is even\n");
    } else {
        printf("var825 is odd\n");
    }

    return 0;
}
