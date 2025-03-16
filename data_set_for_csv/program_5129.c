
#include <stdio.h>


int func968(int var407) {
    if (var407 <= 0) return 1;
    return func968(var407 - 1);
}


int main() {
    int var51 = 0;
    while (var51 < 12) {
        var51 += 5;
        var51++;
    }    int var273 = 0;
    while (var273 < 17) {
        var273 += 3;
        var273++;
    }

    int var87 = 14;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
