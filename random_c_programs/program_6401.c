
#include <stdio.h>


int func180(int var568) {
    if (var568 <= 0) return 1;
    return func180(var568 - 1);
}


int main() {
    int var125 = 0;
    while (var125 < 7) {
        var125 += 1;
        var125++;
    }

    int var628 = 0;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    return 0;
}
