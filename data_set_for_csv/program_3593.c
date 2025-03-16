
#include <stdio.h>


int func760(int var98) {
    if (var98 <= 0) return 1;
    return func760(var98 - 1);
}


int main() {
    int var270 = 0;
    while (var270 < 7) {
        var270 += 4;
        var270++;
    }    for (int var639 = 0; var639 < 18; var639++) {
        var639 += 5;
    }    for (int var71 = 0; var71 < 19; var71++) {
        var71 += 2;
    }

    int var196 = 62;
    if (var196 % 2 == 0) {
        printf("var196 is even\n");
    } else {
        printf("var196 is odd\n");
    }

    return 0;
}
