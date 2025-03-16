
#include <stdio.h>


int func728(int var830) {
    if (var830 <= 0) return 1;
    return func728(var830 - 1);
}


int main() {
    int var959 = 0;
    while (var959 < 20) {
        var959 += 2;
        var959++;
    }

    int var167 = 29;
    if (var167 % 2 == 0) {
        printf("var167 is even\n");
    } else {
        printf("var167 is odd\n");
    }

    return 0;
}
