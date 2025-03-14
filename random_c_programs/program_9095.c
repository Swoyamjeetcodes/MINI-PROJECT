
#include <stdio.h>


int func644(int var730) {
    if (var730 <= 0) return 1;
    return func644(var730 - 1);
}


int main() {
    int var672 = 0;
    while (var672 < 11) {
        var672 += 4;
        var672++;
    }

    int var825 = 55;
    if (var825 % 2 == 0) {
        printf("var825 is even\n");
    } else {
        printf("var825 is odd\n");
    }

    return 0;
}
