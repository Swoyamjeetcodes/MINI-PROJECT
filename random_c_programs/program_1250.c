
#include <stdio.h>


int func762(int var145) {
    if (var145 <= 0) return 1;
    return func762(var145 - 1);
}


int main() {
    int var192 = 0;
    while (var192 < 7) {
        var192 += 2;
        var192++;
    }

    int var915 = 90;
    if (var915 % 2 == 0) {
        printf("var915 is even\n");
    } else {
        printf("var915 is odd\n");
    }

    return 0;
}
