
#include <stdio.h>


int func61(int var580) {
    if (var580 <= 0) return 1;
    return func61(var580 - 1);
}


int main() {
    int var146 = 0;
    while (var146 < 17) {
        var146 += 2;
        var146++;
    }

    int var21 = 98;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    return 0;
}
