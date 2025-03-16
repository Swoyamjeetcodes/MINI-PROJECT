
#include <stdio.h>


int func921(int var349) {
    if (var349 <= 0) return 1;
    return func921(var349 - 1);
}


int main() {
    int var293 = 0;
    while (var293 < 18) {
        var293 += 5;
        var293++;
    }

    int var502 = 52;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    return 0;
}
