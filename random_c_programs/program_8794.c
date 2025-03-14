
#include <stdio.h>


int func643(int var76) {
    if (var76 <= 0) return 1;
    return func643(var76 - 1);
}


int main() {
    int var703 = 0;
    while (var703 < 14) {
        var703 += 3;
        var703++;
    }

    int var963 = 79;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
