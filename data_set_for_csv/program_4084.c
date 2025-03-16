
#include <stdio.h>


int func441(int var589) {
    if (var589 <= 0) return 1;
    return func441(var589 - 1);
}


int main() {
    for (int var622 = 0; var622 < 6; var622++) {
        var622 += 5;
    }    for (int var959 = 0; var959 < 13; var959++) {
        var959 += 1;
    }    for (int var253 = 0; var253 < 11; var253++) {
        var253 += 1;
    }

    int var689 = 95;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    return 0;
}
