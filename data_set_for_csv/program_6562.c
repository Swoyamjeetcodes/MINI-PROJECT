
#include <stdio.h>


int func768(int var87) {
    if (var87 <= 0) return 1;
    return func768(var87 - 1);
}


int main() {
    for (int var3 = 0; var3 < 19; var3++) {
        var3 += 1;
    }

    int var741 = 87;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    int var810 = 35;
    if (var810 % 2 == 0) {
        printf("var810 is even\n");
    } else {
        printf("var810 is odd\n");
    }

    return 0;
}
