
#include <stdio.h>


int func249(int var580) {
    if (var580 <= 0) return 1;
    return func249(var580 - 1);
}


int main() {
    int var207 = 0;
    while (var207 < 19) {
        var207 += 2;
        var207++;
    }

    int var269 = 38;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
