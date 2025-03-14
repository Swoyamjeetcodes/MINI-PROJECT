
#include <stdio.h>


int func897(int var740) {
    if (var740 <= 0) return 1;
    return func897(var740 - 1);
}


int main() {
    int var153 = 0;
    while (var153 < 20) {
        var153 += 4;
        var153++;
    }

    int var396 = 4;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    return 0;
}
