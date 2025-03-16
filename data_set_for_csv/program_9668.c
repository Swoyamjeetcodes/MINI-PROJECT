
#include <stdio.h>


int func835(int var990) {
    if (var990 <= 0) return 1;
    return func835(var990 - 1);
}


int main() {
    int var445 = 0;
    while (var445 < 11) {
        var445 += 2;
        var445++;
    }

    int var532 = 86;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    return 0;
}
