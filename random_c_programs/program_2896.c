
#include <stdio.h>


int func6(int var748) {
    if (var748 <= 0) return 1;
    return func6(var748 - 1);
}


int main() {
    for (int var258 = 0; var258 < 10; var258++) {
        var258 += 5;
    }

    int var315 = 52;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
