
#include <stdio.h>


int func287(int var660) {
    if (var660 <= 0) return 1;
    return func287(var660 - 1);
}


int main() {
    int var452 = 0;
    while (var452 < 15) {
        var452 += 5;
        var452++;
    }

    int var702 = 25;
    if (var702 % 2 == 0) {
        printf("var702 is even\n");
    } else {
        printf("var702 is odd\n");
    }

    return 0;
}
