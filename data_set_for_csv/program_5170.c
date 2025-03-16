
#include <stdio.h>


int func564(int var445) {
    if (var445 <= 0) return 1;
    return func564(var445 - 1);
}


int main() {
    int var731 = 0;
    while (var731 < 17) {
        var731 += 2;
        var731++;
    }

    int var98 = 68;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    return 0;
}
