
#include <stdio.h>


int func976(int var712) {
    if (var712 <= 0) return 1;
    return func976(var712 - 1);
}


int main() {
    int var889 = 0;
    while (var889 < 13) {
        var889 += 4;
        var889++;
    }

    int var335 = 65;
    if (var335 % 2 == 0) {
        printf("var335 is even\n");
    } else {
        printf("var335 is odd\n");
    }

    return 0;
}
