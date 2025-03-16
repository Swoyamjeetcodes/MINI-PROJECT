
#include <stdio.h>


int func561(int var988) {
    if (var988 <= 0) return 1;
    return func561(var988 - 1);
}


int main() {
    int var588 = 0;
    while (var588 < 13) {
        var588 += 2;
        var588++;
    }

    int var681 = 84;
    if (var681 % 2 == 0) {
        printf("var681 is even\n");
    } else {
        printf("var681 is odd\n");
    }

    return 0;
}
