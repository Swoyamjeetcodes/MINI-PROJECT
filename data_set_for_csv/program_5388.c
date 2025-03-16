
#include <stdio.h>


int func921(int var126) {
    if (var126 <= 0) return 1;
    return func921(var126 - 1);
}


int main() {
    int var880 = 0;
    while (var880 < 9) {
        var880 += 5;
        var880++;
    }

    int var765 = 21;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    return 0;
}
