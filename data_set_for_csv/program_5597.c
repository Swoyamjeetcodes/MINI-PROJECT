
#include <stdio.h>


int func390(int var478) {
    if (var478 <= 0) return 1;
    return func390(var478 - 1);
}


int main() {
    for (int var143 = 0; var143 < 11; var143++) {
        var143 += 3;
    }

    int var360 = 15;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}
