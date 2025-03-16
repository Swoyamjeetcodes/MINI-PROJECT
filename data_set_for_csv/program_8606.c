
#include <stdio.h>


int func935(int var662) {
    if (var662 <= 0) return 1;
    return func935(var662 - 1);
}


int main() {
    for (int var718 = 0; var718 < 19; var718++) {
        var718 += 3;
    }

    int var220 = 38;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
