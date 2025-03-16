
#include <stdio.h>


int func748(int var64) {
    if (var64 <= 0) return 1;
    return func748(var64 - 1);
}


int main() {
    int var956 = 0;
    while (var956 < 16) {
        var956 += 5;
        var956++;
    }

    int var619 = 39;
    if (var619 % 2 == 0) {
        printf("var619 is even\n");
    } else {
        printf("var619 is odd\n");
    }

    return 0;
}
