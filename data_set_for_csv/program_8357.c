
#include <stdio.h>


int func359(int var686) {
    if (var686 <= 0) return 1;
    return func359(var686 - 1);
}


int main() {
    int var924 = 0;
    while (var924 < 13) {
        var924 += 3;
        var924++;
    }

    int var919 = 2;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    return 0;
}
