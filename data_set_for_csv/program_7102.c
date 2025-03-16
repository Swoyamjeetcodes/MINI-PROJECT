
#include <stdio.h>


int func943(int var667) {
    if (var667 <= 0) return 1;
    return func943(var667 - 1);
}


int main() {
    int var843 = 0;
    while (var843 < 13) {
        var843 += 4;
        var843++;
    }

    int var988 = 86;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    return 0;
}
