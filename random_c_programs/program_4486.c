
#include <stdio.h>


int func880(int var798) {
    if (var798 <= 0) return 1;
    return func880(var798 - 1);
}


int main() {
    int var497 = 0;
    while (var497 < 15) {
        var497 += 3;
        var497++;
    }

    int var84 = 73;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
