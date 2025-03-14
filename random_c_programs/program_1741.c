
#include <stdio.h>


int func904(int var758) {
    if (var758 <= 0) return 1;
    return func904(var758 - 1);
}


int main() {
    int var712 = 0;
    while (var712 < 14) {
        var712 += 5;
        var712++;
    }

    int var741 = 6;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
