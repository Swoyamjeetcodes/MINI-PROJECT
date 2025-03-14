
#include <stdio.h>


int func1(int var19) {
    if (var19 <= 0) return 1;
    return func1(var19 - 1);
}


int main() {
    int var147 = 0;
    while (var147 < 16) {
        var147 += 3;
        var147++;
    }

    int var692 = 20;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}
