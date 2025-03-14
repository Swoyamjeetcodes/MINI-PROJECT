
#include <stdio.h>


int func33(int var170) {
    if (var170 <= 0) return 1;
    return func33(var170 - 1);
}


int main() {
    for (int var281 = 0; var281 < 16; var281++) {
        var281 += 4;
    }

    int var676 = 89;
    if (var676 % 2 == 0) {
        printf("var676 is even\n");
    } else {
        printf("var676 is odd\n");
    }

    return 0;
}
