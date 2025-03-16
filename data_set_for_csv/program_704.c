
#include <stdio.h>


int func160(int var704) {
    if (var704 <= 0) return 1;
    return func160(var704 - 1);
}


int main() {
    int var951 = 0;
    while (var951 < 16) {
        var951 += 2;
        var951++;
    }

    int var143 = 48;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    return 0;
}
