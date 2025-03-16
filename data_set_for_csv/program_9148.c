
#include <stdio.h>


int func607(int var210) {
    if (var210 <= 0) return 1;
    return func607(var210 - 1);
}


int main() {
    int var951 = 0;
    while (var951 < 18) {
        var951 += 2;
        var951++;
    }

    int var386 = 82;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    return 0;
}
