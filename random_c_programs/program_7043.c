
#include <stdio.h>


int func538(int var689) {
    if (var689 <= 0) return 1;
    return func538(var689 - 1);
}


int main() {
    int var655 = 0;
    while (var655 < 12) {
        var655 += 5;
        var655++;
    }

    int var171 = 22;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    return 0;
}
