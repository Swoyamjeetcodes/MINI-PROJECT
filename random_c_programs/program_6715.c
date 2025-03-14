
#include <stdio.h>


int func867(int var649) {
    if (var649 <= 0) return 1;
    return func867(var649 - 1);
}


int main() {
    int var348 = 0;
    while (var348 < 15) {
        var348 += 1;
        var348++;
    }

    int var242 = 68;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    return 0;
}
