
#include <stdio.h>


int func254(int var674) {
    if (var674 <= 0) return 1;
    return func254(var674 - 1);
}


int main() {
    int var550 = 0;
    while (var550 < 12) {
        var550 += 3;
        var550++;
    }

    int var912 = 38;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    return 0;
}
