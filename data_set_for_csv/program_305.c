
#include <stdio.h>


int func518(int var495) {
    if (var495 <= 0) return 1;
    return func518(var495 - 1);
}


int main() {
    int var102 = 0;
    while (var102 < 7) {
        var102 += 3;
        var102++;
    }

    int var596 = 54;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
