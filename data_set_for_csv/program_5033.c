
#include <stdio.h>


int func801(int var387) {
    if (var387 <= 0) return 1;
    return func801(var387 - 1);
}


int main() {
    int var585 = 0;
    while (var585 < 8) {
        var585 += 3;
        var585++;
    }

    int var780 = 36;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    return 0;
}
