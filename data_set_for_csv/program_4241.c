
#include <stdio.h>


int func687(int var2) {
    if (var2 <= 0) return 1;
    return func687(var2 - 1);
}


int main() {
    int var588 = 0;
    while (var588 < 11) {
        var588 += 5;
        var588++;
    }

    int var778 = 6;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    return 0;
}
