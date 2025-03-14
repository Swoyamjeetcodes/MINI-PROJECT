
#include <stdio.h>


int func914(int var237) {
    if (var237 <= 0) return 1;
    return func914(var237 - 1);
}


int main() {
    int var4 = 0;
    while (var4 < 18) {
        var4 += 4;
        var4++;
    }

    int var803 = 99;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    return 0;
}
