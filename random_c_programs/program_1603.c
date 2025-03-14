
#include <stdio.h>


int func60(int var933) {
    if (var933 <= 0) return 1;
    return func60(var933 - 1);
}


int main() {
    int var54 = 0;
    while (var54 < 7) {
        var54 += 5;
        var54++;
    }

    int var1 = 47;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    return 0;
}
