
#include <stdio.h>


int func135(int var617) {
    if (var617 <= 0) return 1;
    return func135(var617 - 1);
}


int main() {
    int var349 = 0;
    while (var349 < 14) {
        var349 += 3;
        var349++;
    }

    int var185 = 41;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}
