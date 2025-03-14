
#include <stdio.h>


int func33(int var564) {
    if (var564 <= 0) return 1;
    return func33(var564 - 1);
}


int main() {
    int var95 = 0;
    while (var95 < 10) {
        var95 += 1;
        var95++;
    }

    int var479 = 66;
    if (var479 % 2 == 0) {
        printf("var479 is even\n");
    } else {
        printf("var479 is odd\n");
    }

    return 0;
}
