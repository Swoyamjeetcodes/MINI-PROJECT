
#include <stdio.h>


int func736(int var275) {
    if (var275 <= 0) return 1;
    return func736(var275 - 1);
}


int main() {
    int var475 = 0;
    while (var475 < 11) {
        var475 += 3;
        var475++;
    }

    int var184 = 64;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
