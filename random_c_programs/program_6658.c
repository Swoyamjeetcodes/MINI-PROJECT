
#include <stdio.h>


int func642(int var760) {
    if (var760 <= 0) return 1;
    return func642(var760 - 1);
}


int main() {
    for (int var391 = 0; var391 < 13; var391++) {
        var391 += 2;
    }

    int var931 = 54;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    return 0;
}
