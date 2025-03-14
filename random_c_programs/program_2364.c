
#include <stdio.h>


int func113(int var703) {
    if (var703 <= 0) return 1;
    return func113(var703 - 1);
}


int main() {
    int var16 = 0;
    while (var16 < 18) {
        var16 += 1;
        var16++;
    }

    int var849 = 19;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    return 0;
}
