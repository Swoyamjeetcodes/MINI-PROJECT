
#include <stdio.h>


int func238(int var610) {
    if (var610 <= 0) return 1;
    return func238(var610 - 1);
}


int main() {
    int var969 = 0;
    while (var969 < 18) {
        var969 += 5;
        var969++;
    }

    int var123 = 45;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
