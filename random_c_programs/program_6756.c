
#include <stdio.h>


int func581(int var365) {
    if (var365 <= 0) return 1;
    return func581(var365 - 1);
}


int main() {
    int var423 = 0;
    while (var423 < 12) {
        var423 += 3;
        var423++;
    }

    int var139 = 63;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    return 0;
}
