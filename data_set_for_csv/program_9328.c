
#include <stdio.h>


int func622(int var811) {
    if (var811 <= 0) return 1;
    return func622(var811 - 1);
}


int main() {
    int var22 = 0;
    while (var22 < 6) {
        var22 += 2;
        var22++;
    }

    int var40 = 13;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
