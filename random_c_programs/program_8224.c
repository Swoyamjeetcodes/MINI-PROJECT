
#include <stdio.h>


int func753(int var301) {
    if (var301 <= 0) return 1;
    return func753(var301 - 1);
}


int main() {
    int var146 = 0;
    while (var146 < 17) {
        var146 += 1;
        var146++;
    }

    int var540 = 23;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
