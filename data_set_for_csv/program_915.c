
#include <stdio.h>


int func66(int var877) {
    if (var877 <= 0) return 1;
    return func66(var877 - 1);
}


int main() {
    for (int var367 = 0; var367 < 13; var367++) {
        var367 += 3;
    }

    int var53 = 78;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    return 0;
}
