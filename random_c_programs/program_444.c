
#include <stdio.h>


int func729(int var950) {
    if (var950 <= 0) return 1;
    return func729(var950 - 1);
}


int main() {
    int var641 = 0;
    while (var641 < 14) {
        var641 += 4;
        var641++;
    }

    int var80 = 80;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    return 0;
}
