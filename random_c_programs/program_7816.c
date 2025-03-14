
#include <stdio.h>


int func82(int var56) {
    if (var56 <= 0) return 1;
    return func82(var56 - 1);
}


int main() {
    int var645 = 0;
    while (var645 < 18) {
        var645 += 5;
        var645++;
    }

    int var682 = 28;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    return 0;
}
