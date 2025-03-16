
#include <stdio.h>


int func401(int var551) {
    if (var551 <= 0) return 1;
    return func401(var551 - 1);
}


int main() {
    for (int var858 = 0; var858 < 13; var858++) {
        var858 += 3;
    }

    int var87 = 7;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
