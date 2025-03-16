
#include <stdio.h>


int func212(int var57) {
    if (var57 <= 0) return 1;
    return func212(var57 - 1);
}


int main() {
    int var279 = 0;
    while (var279 < 11) {
        var279 += 3;
        var279++;
    }

    int var191 = 27;
    if (var191 % 2 == 0) {
        printf("var191 is even\n");
    } else {
        printf("var191 is odd\n");
    }

    return 0;
}
