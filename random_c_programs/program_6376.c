
#include <stdio.h>


int func243(int var797) {
    if (var797 <= 0) return 1;
    return func243(var797 - 1);
}


int main() {
    int var672 = 0;
    while (var672 < 14) {
        var672 += 1;
        var672++;
    }

    int var320 = 51;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    return 0;
}
