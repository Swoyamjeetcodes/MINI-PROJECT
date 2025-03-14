
#include <stdio.h>


int func88(int var606) {
    if (var606 <= 0) return 1;
    return func88(var606 - 1);
}


int main() {
    int var92 = 0;
    while (var92 < 13) {
        var92 += 4;
        var92++;
    }

    int var913 = 58;
    if (var913 % 2 == 0) {
        printf("var913 is even\n");
    } else {
        printf("var913 is odd\n");
    }

    return 0;
}
