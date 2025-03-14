
#include <stdio.h>


int func206(int var901) {
    if (var901 <= 0) return 1;
    return func206(var901 - 1);
}


int main() {
    int var166 = 0;
    while (var166 < 9) {
        var166 += 4;
        var166++;
    }

    int var57 = 13;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
