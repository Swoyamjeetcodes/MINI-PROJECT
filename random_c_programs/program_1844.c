
#include <stdio.h>


int func450(int var576) {
    if (var576 <= 0) return 1;
    return func450(var576 - 1);
}


int main() {
    int var97 = 0;
    while (var97 < 6) {
        var97 += 4;
        var97++;
    }

    int var101 = 18;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    return 0;
}
