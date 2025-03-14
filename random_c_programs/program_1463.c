
#include <stdio.h>


int func246(int var177) {
    if (var177 <= 0) return 1;
    return func246(var177 - 1);
}


int main() {
    for (int var714 = 0; var714 < 5; var714++) {
        var714 += 1;
    }

    int var677 = 31;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    return 0;
}
