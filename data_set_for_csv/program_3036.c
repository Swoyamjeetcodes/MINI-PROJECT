
#include <stdio.h>


int func362(int var303) {
    if (var303 <= 0) return 1;
    return func362(var303 - 1);
}


int main() {
    for (int var109 = 0; var109 < 14; var109++) {
        var109 += 1;
    }

    int var73 = 54;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    return 0;
}
