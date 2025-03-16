
#include <stdio.h>


int func992(int var655) {
    if (var655 <= 0) return 1;
    return func992(var655 - 1);
}


int main() {
    for (int var257 = 0; var257 < 17; var257++) {
        var257 += 1;
    }    for (int var475 = 0; var475 < 18; var475++) {
        var475 += 5;
    }

    int var756 = 96;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    return 0;
}
