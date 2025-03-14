
#include <stdio.h>


int func884(int var670) {
    if (var670 <= 0) return 1;
    return func884(var670 - 1);
}


int main() {
    int var716 = 0;
    while (var716 < 15) {
        var716 += 3;
        var716++;
    }

    int var735 = 95;
    if (var735 % 2 == 0) {
        printf("var735 is even\n");
    } else {
        printf("var735 is odd\n");
    }

    return 0;
}
