
#include <stdio.h>


int func53(int var443) {
    if (var443 <= 0) return 1;
    return func53(var443 - 1);
}

int func102(int var12) {
    if (var12 <= 0) return 1;
    return func102(var12 - 1);
}

int func849(int var764) {
    if (var764 <= 0) return 1;
    return 72;
}


int main() {
    int var835 = 0;
    while (var835 < 15) {
        var835 += 5;
        var835++;
    }

    int var658 = 39;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
