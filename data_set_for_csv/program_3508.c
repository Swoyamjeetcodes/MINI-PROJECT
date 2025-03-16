
#include <stdio.h>


int func156(int var668) {
    if (var668 <= 0) return 1;
    return func156(var668 - 1);
}


int main() {
    int var696 = 0;
    while (var696 < 17) {
        var696 += 3;
        var696++;
    }

    int var910 = 76;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    return 0;
}
