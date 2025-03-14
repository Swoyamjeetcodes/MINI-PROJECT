
#include <stdio.h>


int func113(int var684) {
    if (var684 <= 0) return 1;
    return func113(var684 - 1);
}


int main() {
    int var141 = 0;
    while (var141 < 18) {
        var141 += 2;
        var141++;
    }

    int var555 = 35;
    if (var555 % 2 == 0) {
        printf("var555 is even\n");
    } else {
        printf("var555 is odd\n");
    }

    return 0;
}
