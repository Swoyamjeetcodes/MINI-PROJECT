
#include <stdio.h>


int func841(int var930) {
    if (var930 <= 0) return 1;
    return func841(var930 - 1);
}


int main() {
    int var539 = 0;
    while (var539 < 11) {
        var539 += 2;
        var539++;
    }

    int var8 = 25;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    return 0;
}
