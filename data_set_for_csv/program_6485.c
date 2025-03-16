
#include <stdio.h>


int func659(int var602) {
    if (var602 <= 0) return 1;
    return func659(var602 - 1);
}


int main() {
    int var559 = 0;
    while (var559 < 20) {
        var559 += 4;
        var559++;
    }

    int var768 = 16;
    if (var768 % 2 == 0) {
        printf("var768 is even\n");
    } else {
        printf("var768 is odd\n");
    }

    return 0;
}
