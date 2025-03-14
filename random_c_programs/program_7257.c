
#include <stdio.h>


int func983(int var18) {
    if (var18 <= 0) return 1;
    return func983(var18 - 1);
}


int main() {
    int var896 = 0;
    while (var896 < 19) {
        var896 += 5;
        var896++;
    }

    int var102 = 3;
    if (var102 % 2 == 0) {
        printf("var102 is even\n");
    } else {
        printf("var102 is odd\n");
    }

    return 0;
}
