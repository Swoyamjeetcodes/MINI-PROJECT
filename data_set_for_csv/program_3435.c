
#include <stdio.h>


int func644(int var306) {
    if (var306 <= 0) return 1;
    return func644(var306 - 1);
}


int main() {
    int var519 = 0;
    while (var519 < 19) {
        var519 += 1;
        var519++;
    }

    int var447 = 32;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    return 0;
}
