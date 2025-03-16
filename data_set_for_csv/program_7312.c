
#include <stdio.h>


int func213(int var507) {
    if (var507 <= 0) return 1;
    return func213(var507 - 1);
}


int main() {
    int var510 = 0;
    while (var510 < 6) {
        var510 += 3;
        var510++;
    }    int var546 = 0;
    while (var546 < 14) {
        var546 += 1;
        var546++;
    }

    int var469 = 41;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    int var885 = 78;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    return 0;
}
