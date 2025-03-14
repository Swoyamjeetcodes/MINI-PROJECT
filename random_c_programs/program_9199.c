
#include <stdio.h>


int func997(int var608) {
    if (var608 <= 0) return 1;
    return func997(var608 - 1);
}


int main() {
    int var731 = 0;
    while (var731 < 8) {
        var731 += 4;
        var731++;
    }

    int var770 = 86;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
