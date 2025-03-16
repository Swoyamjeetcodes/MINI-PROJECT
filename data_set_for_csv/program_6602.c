
#include <stdio.h>


int func213(int var564) {
    if (var564 <= 0) return 1;
    return func213(var564 - 1);
}


int main() {
    int var220 = 0;
    while (var220 < 7) {
        var220 += 4;
        var220++;
    }

    int var49 = 73;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    return 0;
}
