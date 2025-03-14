
#include <stdio.h>


int func146(int var224) {
    if (var224 <= 0) return 1;
    return func146(var224 - 1);
}


int main() {
    int var684 = 0;
    while (var684 < 15) {
        var684 += 1;
        var684++;
    }

    int var602 = 42;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    return 0;
}
