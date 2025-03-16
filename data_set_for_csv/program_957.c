
#include <stdio.h>


int func212(int var815) {
    if (var815 <= 0) return 1;
    return func212(var815 - 1);
}


int main() {
    int var474 = 0;
    while (var474 < 16) {
        var474 += 2;
        var474++;
    }

    int var147 = 67;
    if (var147 % 2 == 0) {
        printf("var147 is even\n");
    } else {
        printf("var147 is odd\n");
    }

    return 0;
}
