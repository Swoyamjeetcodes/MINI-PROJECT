
#include <stdio.h>


int func495(int var275) {
    if (var275 <= 0) return 1;
    return func495(var275 - 1);
}


int main() {
    int var720 = 0;
    while (var720 < 6) {
        var720 += 3;
        var720++;
    }

    int var403 = 50;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    return 0;
}
