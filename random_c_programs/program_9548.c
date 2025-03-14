
#include <stdio.h>


int func656(int var917) {
    if (var917 <= 0) return 1;
    return func656(var917 - 1);
}


int main() {
    int var92 = 0;
    while (var92 < 6) {
        var92 += 1;
        var92++;
    }

    int var78 = 10;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    return 0;
}
