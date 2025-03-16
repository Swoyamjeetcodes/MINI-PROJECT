
#include <stdio.h>


int func770(int var662) {
    if (var662 <= 0) return 1;
    return func770(var662 - 1);
}


int main() {
    int var664 = 0;
    while (var664 < 10) {
        var664 += 4;
        var664++;
    }

    int var393 = 49;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    return 0;
}
