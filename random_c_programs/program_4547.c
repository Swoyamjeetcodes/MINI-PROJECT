
#include <stdio.h>


int func596(int var901) {
    if (var901 <= 0) return 1;
    return func596(var901 - 1);
}


int main() {
    int var514 = 0;
    while (var514 < 7) {
        var514 += 2;
        var514++;
    }

    int var722 = 2;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
