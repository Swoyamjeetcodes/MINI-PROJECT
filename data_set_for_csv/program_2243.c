
#include <stdio.h>


int func238(int var4) {
    if (var4 <= 0) return 1;
    return func238(var4 - 1);
}


int main() {
    for (int var746 = 0; var746 < 19; var746++) {
        var746 += 3;
    }

    int var202 = 95;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    return 0;
}
