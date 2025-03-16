
#include <stdio.h>


int func478(int var481) {
    if (var481 <= 0) return 1;
    return func478(var481 - 1);
}


int main() {
    int var207 = 0;
    while (var207 < 18) {
        var207 += 2;
        var207++;
    }

    int var128 = 83;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
