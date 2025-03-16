
#include <stdio.h>


int func671(int var71) {
    if (var71 <= 0) return 1;
    return func671(var71 - 1);
}


int main() {
    for (int var261 = 0; var261 < 16; var261++) {
        var261 += 3;
    }

    int var763 = 50;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    return 0;
}
