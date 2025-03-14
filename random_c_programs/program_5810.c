
#include <stdio.h>


int func59(int var611) {
    if (var611 <= 0) return 1;
    return func59(var611 - 1);
}


int main() {
    int var727 = 0;
    while (var727 < 9) {
        var727 += 3;
        var727++;
    }

    int var251 = 54;
    if (var251 % 2 == 0) {
        printf("var251 is even\n");
    } else {
        printf("var251 is odd\n");
    }

    return 0;
}
