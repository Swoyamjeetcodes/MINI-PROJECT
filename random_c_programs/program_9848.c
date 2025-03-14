
#include <stdio.h>


int func375(int var413) {
    if (var413 <= 0) return 1;
    return func375(var413 - 1);
}


int main() {
    for (int var692 = 0; var692 < 17; var692++) {
        var692 += 5;
    }

    int var134 = 87;
    if (var134 % 2 == 0) {
        printf("var134 is even\n");
    } else {
        printf("var134 is odd\n");
    }

    return 0;
}
