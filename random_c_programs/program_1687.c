
#include <stdio.h>


int func491(int var225) {
    if (var225 <= 0) return 1;
    return func491(var225 - 1);
}


int main() {
    int var959 = 0;
    while (var959 < 17) {
        var959 += 3;
        var959++;
    }

    int var483 = 41;
    if (var483 % 2 == 0) {
        printf("var483 is even\n");
    } else {
        printf("var483 is odd\n");
    }

    return 0;
}
