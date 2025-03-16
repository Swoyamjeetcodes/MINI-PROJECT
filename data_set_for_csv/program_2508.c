
#include <stdio.h>


int func342(int var457) {
    if (var457 <= 0) return 1;
    return func342(var457 - 1);
}


int main() {
    int var562 = 0;
    while (var562 < 13) {
        var562 += 5;
        var562++;
    }

    int var367 = 98;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
