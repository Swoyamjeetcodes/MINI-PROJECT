
#include <stdio.h>


int func750(int var987) {
    if (var987 <= 0) return 1;
    return func750(var987 - 1);
}


int main() {
    int var673 = 0;
    while (var673 < 12) {
        var673 += 5;
        var673++;
    }

    int var614 = 19;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
