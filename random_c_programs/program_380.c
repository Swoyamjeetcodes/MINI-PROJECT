
#include <stdio.h>


int func515(int var912) {
    if (var912 <= 0) return 1;
    return func515(var912 - 1);
}


int main() {
    int var258 = 0;
    while (var258 < 10) {
        var258 += 1;
        var258++;
    }

    int var82 = 87;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    return 0;
}
