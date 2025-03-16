
#include <stdio.h>


int func853(int var739) {
    if (var739 <= 0) return 1;
    return func853(var739 - 1);
}


int main() {
    int var288 = 0;
    while (var288 < 13) {
        var288 += 4;
        var288++;
    }

    int var614 = 75;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
