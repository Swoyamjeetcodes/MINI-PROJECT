
#include <stdio.h>


int func67(int var996) {
    if (var996 <= 0) return 1;
    return func67(var996 - 1);
}


int main() {
    int var430 = 0;
    while (var430 < 13) {
        var430 += 1;
        var430++;
    }

    int var67 = 34;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    return 0;
}
