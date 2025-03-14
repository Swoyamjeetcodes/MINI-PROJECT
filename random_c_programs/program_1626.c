
#include <stdio.h>


int func912(int var646) {
    if (var646 <= 0) return 1;
    return func912(var646 - 1);
}


int main() {
    int var367 = 0;
    while (var367 < 12) {
        var367 += 4;
        var367++;
    }

    int var1000 = 85;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
