
#include <stdio.h>


int func456(int var371) {
    if (var371 <= 0) return 1;
    return func456(var371 - 1);
}


int main() {
    int var691 = 0;
    while (var691 < 13) {
        var691 += 5;
        var691++;
    }

    int var785 = 93;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    return 0;
}
