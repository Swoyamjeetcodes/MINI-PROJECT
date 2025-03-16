
#include <stdio.h>


int func941(int var540) {
    if (var540 <= 0) return 1;
    return func941(var540 - 1);
}


int main() {
    int var609 = 0;
    while (var609 < 13) {
        var609 += 3;
        var609++;
    }

    int var874 = 14;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    return 0;
}
