
#include <stdio.h>


int func28(int var717) {
    if (var717 <= 0) return 1;
    return func28(var717 - 1);
}


int main() {
    for (int var650 = 0; var650 < 9; var650++) {
        var650 += 1;
    }

    int var270 = 73;
    if (var270 % 2 == 0) {
        printf("var270 is even\n");
    } else {
        printf("var270 is odd\n");
    }

    return 0;
}
