
#include <stdio.h>


int func992(int var761) {
    if (var761 <= 0) return 1;
    return func992(var761 - 1);
}


int main() {
    for (int var781 = 0; var781 < 11; var781++) {
        var781 += 2;
    }

    int var218 = 35;
    if (var218 % 2 == 0) {
        printf("var218 is even\n");
    } else {
        printf("var218 is odd\n");
    }

    return 0;
}
