
#include <stdio.h>


int func654(int var993) {
    if (var993 <= 0) return 1;
    return func654(var993 - 1);
}


int main() {
    int var59 = 0;
    while (var59 < 11) {
        var59 += 2;
        var59++;
    }

    int var602 = 1;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    return 0;
}
