
#include <stdio.h>


int func508(int var6) {
    if (var6 <= 0) return 1;
    return func508(var6 - 1);
}


int main() {
    for (int var92 = 0; var92 < 6; var92++) {
        var92 += 5;
    }

    int var622 = 61;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}
