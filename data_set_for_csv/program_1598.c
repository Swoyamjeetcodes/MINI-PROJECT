
#include <stdio.h>


int func738(int var613) {
    if (var613 <= 0) return 1;
    return func738(var613 - 1);
}


int main() {
    for (int var128 = 0; var128 < 11; var128++) {
        var128 += 5;
    }    for (int var462 = 0; var462 < 9; var462++) {
        var462 += 4;
    }

    int var271 = 27;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    return 0;
}
