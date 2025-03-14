
#include <stdio.h>


int func373(int var95) {
    if (var95 <= 0) return 1;
    return func373(var95 - 1);
}


int main() {
    int var72 = 0;
    while (var72 < 12) {
        var72 += 3;
        var72++;
    }

    int var778 = 76;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    return 0;
}
