
#include <stdio.h>


int func603(int var24) {
    if (var24 <= 0) return 1;
    return func603(var24 - 1);
}


int main() {
    for (int var986 = 0; var986 < 15; var986++) {
        var986 += 4;
    }

    int var619 = 97;
    if (var619 % 2 == 0) {
        printf("var619 is even\n");
    } else {
        printf("var619 is odd\n");
    }

    return 0;
}
