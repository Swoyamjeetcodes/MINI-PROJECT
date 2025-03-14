
#include <stdio.h>


int func410(int var351) {
    if (var351 <= 0) return 1;
    return func410(var351 - 1);
}


int main() {
    int var722 = 0;
    while (var722 < 8) {
        var722 += 2;
        var722++;
    }

    int var59 = 93;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    return 0;
}
