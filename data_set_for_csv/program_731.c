
#include <stdio.h>


int func583(int var910) {
    if (var910 <= 0) return 1;
    return func583(var910 - 1);
}


int main() {
    for (int var600 = 0; var600 < 20; var600++) {
        var600 += 3;
    }

    int var15 = 52;
    if (var15 % 2 == 0) {
        printf("var15 is even\n");
    } else {
        printf("var15 is odd\n");
    }

    return 0;
}
