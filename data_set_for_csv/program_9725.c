
#include <stdio.h>


int func72(int var309) {
    if (var309 <= 0) return 1;
    return func72(var309 - 1);
}


int main() {
    int var490 = 0;
    while (var490 < 6) {
        var490 += 3;
        var490++;
    }

    int var558 = 19;
    if (var558 % 2 == 0) {
        printf("var558 is even\n");
    } else {
        printf("var558 is odd\n");
    }

    return 0;
}
