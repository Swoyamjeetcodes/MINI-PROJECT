
#include <stdio.h>


int func774(int var300) {
    if (var300 <= 0) return 1;
    return func774(var300 - 1);
}


int main() {
    int var315 = 0;
    while (var315 < 8) {
        var315 += 1;
        var315++;
    }

    int var9 = 59;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    return 0;
}
