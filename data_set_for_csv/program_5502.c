
#include <stdio.h>


int func680(int var500) {
    if (var500 <= 0) return 1;
    return func680(var500 - 1);
}


int main() {
    for (int var585 = 0; var585 < 5; var585++) {
        var585 += 3;
    }

    int var387 = 68;
    if (var387 % 2 == 0) {
        printf("var387 is even\n");
    } else {
        printf("var387 is odd\n");
    }

    return 0;
}
