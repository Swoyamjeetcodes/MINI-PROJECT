
#include <stdio.h>


int func530(int var549) {
    if (var549 <= 0) return 1;
    return func530(var549 - 1);
}


int main() {
    int var694 = 0;
    while (var694 < 20) {
        var694 += 4;
        var694++;
    }

    int var554 = 11;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    return 0;
}
