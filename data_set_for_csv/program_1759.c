
#include <stdio.h>


int func896(int var155) {
    if (var155 <= 0) return 1;
    return func896(var155 - 1);
}


int main() {
    for (int var485 = 0; var485 < 6; var485++) {
        var485 += 5;
    }

    int var81 = 42;
    if (var81 % 2 == 0) {
        printf("var81 is even\n");
    } else {
        printf("var81 is odd\n");
    }

    return 0;
}
