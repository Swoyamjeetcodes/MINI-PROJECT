
#include <stdio.h>


int func804(int var551) {
    if (var551 <= 0) return 1;
    return func804(var551 - 1);
}


int main() {
    int var687 = 0;
    while (var687 < 17) {
        var687 += 5;
        var687++;
    }

    int var526 = 91;
    if (var526 % 2 == 0) {
        printf("var526 is even\n");
    } else {
        printf("var526 is odd\n");
    }

    return 0;
}
