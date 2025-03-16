
#include <stdio.h>


int func663(int var275) {
    if (var275 <= 0) return 1;
    return func663(var275 - 1);
}


int main() {
    int var692 = 0;
    while (var692 < 11) {
        var692 += 5;
        var692++;
    }

    int var210 = 42;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}
