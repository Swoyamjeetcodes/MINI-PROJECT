
#include <stdio.h>


int func234(int var658) {
    if (var658 <= 0) return 1;
    return func234(var658 - 1);
}


int main() {
    for (int var373 = 0; var373 < 17; var373++) {
        var373 += 3;
    }

    int var165 = 35;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
