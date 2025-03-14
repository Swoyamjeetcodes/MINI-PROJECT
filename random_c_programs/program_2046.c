
#include <stdio.h>


int func126(int var209) {
    if (var209 <= 0) return 1;
    return func126(var209 - 1);
}


int main() {
    int var315 = 0;
    while (var315 < 8) {
        var315 += 3;
        var315++;
    }

    int var746 = 13;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
