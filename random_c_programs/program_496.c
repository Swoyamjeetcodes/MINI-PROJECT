
#include <stdio.h>


int func712(int var494) {
    if (var494 <= 0) return 1;
    return func712(var494 - 1);
}


int main() {
    int var722 = 0;
    while (var722 < 8) {
        var722 += 5;
        var722++;
    }

    int var315 = 69;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
