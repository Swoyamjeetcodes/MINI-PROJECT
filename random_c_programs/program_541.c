
#include <stdio.h>


int func431(int var211) {
    if (var211 <= 0) return 1;
    return func431(var211 - 1);
}


int main() {
    for (int var888 = 0; var888 < 6; var888++) {
        var888 += 5;
    }

    int var708 = 88;
    if (var708 % 2 == 0) {
        printf("var708 is even\n");
    } else {
        printf("var708 is odd\n");
    }

    return 0;
}
