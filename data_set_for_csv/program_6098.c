
#include <stdio.h>


int func670(int var439) {
    if (var439 <= 0) return 1;
    return func670(var439 - 1);
}


int main() {
    int var932 = 0;
    while (var932 < 8) {
        var932 += 2;
        var932++;
    }

    int var275 = 6;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    return 0;
}
