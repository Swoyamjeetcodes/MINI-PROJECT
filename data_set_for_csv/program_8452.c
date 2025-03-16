
#include <stdio.h>


int func587(int var946) {
    if (var946 <= 0) return 1;
    return func587(var946 - 1);
}


int main() {
    for (int var779 = 0; var779 < 13; var779++) {
        var779 += 5;
    }

    int var46 = 19;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    return 0;
}
