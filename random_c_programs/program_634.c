
#include <stdio.h>


int func169(int var214) {
    if (var214 <= 0) return 1;
    return func169(var214 - 1);
}


int main() {
    int var686 = 0;
    while (var686 < 5) {
        var686 += 1;
        var686++;
    }

    int var595 = 86;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    return 0;
}
