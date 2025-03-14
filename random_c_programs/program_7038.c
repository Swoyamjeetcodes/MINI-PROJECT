
#include <stdio.h>


int func177(int var930) {
    if (var930 <= 0) return 1;
    return func177(var930 - 1);
}


int main() {
    for (int var166 = 0; var166 < 19; var166++) {
        var166 += 4;
    }

    int var238 = 91;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    return 0;
}
