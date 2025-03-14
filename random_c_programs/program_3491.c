
#include <stdio.h>


int func605(int var307) {
    if (var307 <= 0) return 1;
    return func605(var307 - 1);
}


int main() {
    int var184 = 0;
    while (var184 < 19) {
        var184 += 5;
        var184++;
    }

    int var834 = 19;
    if (var834 % 2 == 0) {
        printf("var834 is even\n");
    } else {
        printf("var834 is odd\n");
    }

    return 0;
}
