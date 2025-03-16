
#include <stdio.h>


int func796(int var966) {
    if (var966 <= 0) return 1;
    return func796(var966 - 1);
}


int main() {
    int var506 = 0;
    while (var506 < 15) {
        var506 += 1;
        var506++;
    }

    int var754 = 11;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    return 0;
}
