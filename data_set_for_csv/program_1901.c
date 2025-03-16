
#include <stdio.h>


int func262(int var912) {
    if (var912 <= 0) return 1;
    return func262(var912 - 1);
}


int main() {
    int var498 = 0;
    while (var498 < 5) {
        var498 += 3;
        var498++;
    }

    int var123 = 31;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
