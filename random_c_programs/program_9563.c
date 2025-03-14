
#include <stdio.h>


int func455(int var467) {
    if (var467 <= 0) return 1;
    return func455(var467 - 1);
}


int main() {
    for (int var240 = 0; var240 < 10; var240++) {
        var240 += 3;
    }

    int var605 = 37;
    if (var605 % 2 == 0) {
        printf("var605 is even\n");
    } else {
        printf("var605 is odd\n");
    }

    return 0;
}
