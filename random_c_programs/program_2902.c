
#include <stdio.h>


int func133(int var82) {
    if (var82 <= 0) return 1;
    return func133(var82 - 1);
}


int main() {
    int var580 = 0;
    while (var580 < 19) {
        var580 += 4;
        var580++;
    }

    int var728 = 94;
    if (var728 % 2 == 0) {
        printf("var728 is even\n");
    } else {
        printf("var728 is odd\n");
    }

    return 0;
}
