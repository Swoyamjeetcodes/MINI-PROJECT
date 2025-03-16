
#include <stdio.h>


int func889(int var53) {
    if (var53 <= 0) return 1;
    return func889(var53 - 1);
}


int main() {
    for (int var830 = 0; var830 < 11; var830++) {
        var830 += 5;
    }

    int var92 = 66;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    return 0;
}
