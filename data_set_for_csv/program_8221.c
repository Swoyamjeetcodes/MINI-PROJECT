
#include <stdio.h>


int func95(int var850) {
    if (var850 <= 0) return 1;
    return func95(var850 - 1);
}


int main() {
    int var333 = 0;
    while (var333 < 8) {
        var333 += 1;
        var333++;
    }

    int var106 = 81;
    if (var106 % 2 == 0) {
        printf("var106 is even\n");
    } else {
        printf("var106 is odd\n");
    }

    return 0;
}
