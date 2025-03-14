
#include <stdio.h>


int func474(int var207) {
    if (var207 <= 0) return 1;
    return func474(var207 - 1);
}


int main() {
    int var802 = 0;
    while (var802 < 17) {
        var802 += 5;
        var802++;
    }

    int var123 = 5;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
