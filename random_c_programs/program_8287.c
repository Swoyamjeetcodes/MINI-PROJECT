
#include <stdio.h>


int func737(int var185) {
    if (var185 <= 0) return 1;
    return func737(var185 - 1);
}


int main() {
    int var359 = 0;
    while (var359 < 20) {
        var359 += 4;
        var359++;
    }

    int var344 = 1;
    if (var344 % 2 == 0) {
        printf("var344 is even\n");
    } else {
        printf("var344 is odd\n");
    }

    return 0;
}
