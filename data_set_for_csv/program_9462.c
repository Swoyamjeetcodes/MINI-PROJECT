
#include <stdio.h>


int func145(int var88) {
    if (var88 <= 0) return 1;
    return func145(var88 - 1);
}


int main() {
    int var585 = 0;
    while (var585 < 17) {
        var585 += 4;
        var585++;
    }

    int var698 = 35;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    return 0;
}
