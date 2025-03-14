
#include <stdio.h>


int func169(int var966) {
    if (var966 <= 0) return 1;
    return func169(var966 - 1);
}


int main() {
    int var327 = 0;
    while (var327 < 6) {
        var327 += 2;
        var327++;
    }

    int var269 = 25;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
