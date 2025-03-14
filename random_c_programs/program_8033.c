
#include <stdio.h>


int func895(int var988) {
    if (var988 <= 0) return 1;
    return func895(var988 - 1);
}


int main() {
    int var889 = 0;
    while (var889 < 11) {
        var889 += 3;
        var889++;
    }

    int var1 = 73;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    return 0;
}
