
#include <stdio.h>


int func666(int var225) {
    if (var225 <= 0) return 1;
    return func666(var225 - 1);
}


int main() {
    for (int var856 = 0; var856 < 16; var856++) {
        var856 += 5;
    }

    int var518 = 30;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    return 0;
}
