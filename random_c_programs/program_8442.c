
#include <stdio.h>


int func741(int var562) {
    if (var562 <= 0) return 1;
    return func741(var562 - 1);
}


int main() {
    int var529 = 0;
    while (var529 < 6) {
        var529 += 5;
        var529++;
    }

    int var884 = 28;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
