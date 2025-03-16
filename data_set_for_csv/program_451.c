
#include <stdio.h>


int func699(int var798) {
    if (var798 <= 0) return 1;
    return func699(var798 - 1);
}


int main() {
    int var72 = 0;
    while (var72 < 19) {
        var72 += 1;
        var72++;
    }

    int var600 = 27;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
