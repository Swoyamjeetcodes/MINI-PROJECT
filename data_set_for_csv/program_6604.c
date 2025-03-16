
#include <stdio.h>


int func945(int var645) {
    if (var645 <= 0) return 1;
    return func945(var645 - 1);
}


int main() {
    int var833 = 0;
    while (var833 < 7) {
        var833 += 2;
        var833++;
    }

    int var274 = 5;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
