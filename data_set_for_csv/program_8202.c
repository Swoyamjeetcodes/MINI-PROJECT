
#include <stdio.h>


int func312(int var677) {
    if (var677 <= 0) return 1;
    return func312(var677 - 1);
}


int main() {
    for (int var818 = 0; var818 < 12; var818++) {
        var818 += 5;
    }

    int var421 = 92;
    if (var421 % 2 == 0) {
        printf("var421 is even\n");
    } else {
        printf("var421 is odd\n");
    }

    return 0;
}
