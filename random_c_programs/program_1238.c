
#include <stdio.h>


int func407(int var73) {
    if (var73 <= 0) return 1;
    return func407(var73 - 1);
}


int main() {
    int var213 = 0;
    while (var213 < 9) {
        var213 += 2;
        var213++;
    }

    int var936 = 6;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
