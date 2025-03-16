
#include <stdio.h>


int func615(int var910) {
    if (var910 <= 0) return 1;
    return func615(var910 - 1);
}


int main() {
    for (int var947 = 0; var947 < 10; var947++) {
        var947 += 3;
    }

    int var55 = 4;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    return 0;
}
