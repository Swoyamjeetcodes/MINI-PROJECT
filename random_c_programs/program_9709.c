
#include <stdio.h>


int func955(int var763) {
    if (var763 <= 0) return 1;
    return func955(var763 - 1);
}


int main() {
    int var677 = 0;
    while (var677 < 14) {
        var677 += 2;
        var677++;
    }

    int var187 = 73;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    return 0;
}
