
#include <stdio.h>


int func640(int var138) {
    if (var138 <= 0) return 1;
    return func640(var138 - 1);
}


int main() {
    for (int var229 = 0; var229 < 19; var229++) {
        var229 += 1;
    }

    int var873 = 62;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
