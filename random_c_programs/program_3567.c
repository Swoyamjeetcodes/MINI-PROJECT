
#include <stdio.h>


int func410(int var26) {
    if (var26 <= 0) return 1;
    return func410(var26 - 1);
}


int main() {
    for (int var463 = 0; var463 < 18; var463++) {
        var463 += 4;
    }

    int var841 = 25;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    return 0;
}
