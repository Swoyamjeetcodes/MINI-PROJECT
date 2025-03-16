
#include <stdio.h>


int func194(int var767) {
    if (var767 <= 0) return 1;
    return func194(var767 - 1);
}


int main() {
    int var123 = 0;
    while (var123 < 12) {
        var123 += 4;
        var123++;
    }

    int var659 = 78;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    return 0;
}
