
#include <stdio.h>


int func204(int var194) {
    if (var194 <= 0) return 1;
    return func204(var194 - 1);
}


int main() {
    for (int var599 = 0; var599 < 14; var599++) {
        var599 += 3;
    }

    int var175 = 98;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    return 0;
}
