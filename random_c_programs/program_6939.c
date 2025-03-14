
#include <stdio.h>


int func234(int var214) {
    if (var214 <= 0) return 1;
    return func234(var214 - 1);
}


int main() {
    int var87 = 0;
    while (var87 < 19) {
        var87 += 2;
        var87++;
    }

    int var66 = 79;
    if (var66 % 2 == 0) {
        printf("var66 is even\n");
    } else {
        printf("var66 is odd\n");
    }

    return 0;
}
