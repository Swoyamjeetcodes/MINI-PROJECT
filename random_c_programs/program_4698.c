
#include <stdio.h>


int func997(int var82) {
    if (var82 <= 0) return 1;
    return func997(var82 - 1);
}


int main() {
    int var302 = 0;
    while (var302 < 19) {
        var302 += 3;
        var302++;
    }

    int var459 = 55;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    return 0;
}
