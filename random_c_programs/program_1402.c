
#include <stdio.h>


int func846(int var318) {
    if (var318 <= 0) return 1;
    return func846(var318 - 1);
}


int main() {
    int var458 = 0;
    while (var458 < 19) {
        var458 += 5;
        var458++;
    }

    int var655 = 85;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    return 0;
}
