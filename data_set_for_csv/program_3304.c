
#include <stdio.h>


int func644(int var349) {
    if (var349 <= 0) return 1;
    return func644(var349 - 1);
}


int main() {
    int var126 = 0;
    while (var126 < 9) {
        var126 += 4;
        var126++;
    }

    int var439 = 82;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
