
#include <stdio.h>


int func178(int var320) {
    if (var320 <= 0) return 1;
    return func178(var320 - 1);
}


int main() {
    for (int var775 = 0; var775 < 16; var775++) {
        var775 += 4;
    }

    int var643 = 61;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
