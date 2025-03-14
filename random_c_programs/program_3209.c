
#include <stdio.h>


int func404(int var626) {
    if (var626 <= 0) return 1;
    return func404(var626 - 1);
}


int main() {
    int var235 = 0;
    while (var235 < 20) {
        var235 += 5;
        var235++;
    }

    int var75 = 65;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    return 0;
}
