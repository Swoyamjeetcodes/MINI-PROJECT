
#include <stdio.h>


int func545(int var157) {
    if (var157 <= 0) return 1;
    return func545(var157 - 1);
}


int main() {
    int var360 = 0;
    while (var360 < 20) {
        var360 += 5;
        var360++;
    }

    int var691 = 34;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    return 0;
}
