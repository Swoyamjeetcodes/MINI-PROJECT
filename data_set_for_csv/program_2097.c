
#include <stdio.h>


int func29(int var393) {
    if (var393 <= 0) return 1;
    return func29(var393 - 1);
}


int main() {
    for (int var271 = 0; var271 < 6; var271++) {
        var271 += 1;
    }

    int var279 = 80;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    return 0;
}
