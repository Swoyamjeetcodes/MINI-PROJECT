
#include <stdio.h>


int func652(int var588) {
    if (var588 <= 0) return 1;
    return func652(var588 - 1);
}


int main() {
    for (int var589 = 0; var589 < 10; var589++) {
        var589 += 4;
    }

    int var956 = 45;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
