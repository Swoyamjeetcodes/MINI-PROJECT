
#include <stdio.h>


int func719(int var267) {
    if (var267 <= 0) return 1;
    return func719(var267 - 1);
}


int main() {
    for (int var922 = 0; var922 < 18; var922++) {
        var922 += 2;
    }

    int var655 = 46;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    return 0;
}
