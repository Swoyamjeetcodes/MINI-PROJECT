
#include <stdio.h>


int func433(int var782) {
    if (var782 <= 0) return 1;
    return func433(var782 - 1);
}


int main() {
    int var73 = 0;
    while (var73 < 7) {
        var73 += 3;
        var73++;
    }

    int var990 = 89;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    return 0;
}
