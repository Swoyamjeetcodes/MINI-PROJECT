
#include <stdio.h>


int func316(int var49) {
    if (var49 <= 0) return 1;
    return func316(var49 - 1);
}


int main() {
    int var353 = 0;
    while (var353 < 10) {
        var353 += 1;
        var353++;
    }

    int var593 = 36;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
