
#include <stdio.h>


int func904(int var722) {
    if (var722 <= 0) return 1;
    return func904(var722 - 1);
}


int main() {
    int var121 = 0;
    while (var121 < 14) {
        var121 += 3;
        var121++;
    }

    int var28 = 94;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    return 0;
}
