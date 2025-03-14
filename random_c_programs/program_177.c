
#include <stdio.h>


int func949(int var422) {
    if (var422 <= 0) return 1;
    return func949(var422 - 1);
}


int main() {
    for (int var943 = 0; var943 < 12; var943++) {
        var943 += 2;
    }

    int var596 = 65;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
