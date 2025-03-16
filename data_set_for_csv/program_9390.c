
#include <stdio.h>


int func76(int var688) {
    if (var688 <= 0) return 1;
    return func76(var688 - 1);
}


int main() {
    for (int var704 = 0; var704 < 9; var704++) {
        var704 += 3;
    }

    int var273 = 41;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    return 0;
}
