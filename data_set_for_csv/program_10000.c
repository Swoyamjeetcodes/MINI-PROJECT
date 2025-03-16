
#include <stdio.h>


int func549(int var421) {
    if (var421 <= 0) return 1;
    return func549(var421 - 1);
}


int main() {
    for (int var146 = 0; var146 < 10; var146++) {
        var146 += 4;
    }

    int var927 = 52;
    if (var927 % 2 == 0) {
        printf("var927 is even\n");
    } else {
        printf("var927 is odd\n");
    }

    return 0;
}
