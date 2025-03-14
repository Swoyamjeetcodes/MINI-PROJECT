
#include <stdio.h>


int func12(int var475) {
    if (var475 <= 0) return 1;
    return func12(var475 - 1);
}


int main() {
    int var185 = 0;
    while (var185 < 18) {
        var185 += 4;
        var185++;
    }

    int var463 = 44;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
