
#include <stdio.h>


int func416(int var794) {
    if (var794 <= 0) return 1;
    return func416(var794 - 1);
}


int main() {
    int var63 = 0;
    while (var63 < 5) {
        var63 += 4;
        var63++;
    }

    int var648 = 50;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    return 0;
}
