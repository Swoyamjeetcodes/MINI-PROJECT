
#include <stdio.h>


int func269(int var449) {
    if (var449 <= 0) return 1;
    return func269(var449 - 1);
}


int main() {
    for (int var697 = 0; var697 < 8; var697++) {
        var697 += 5;
    }

    int var677 = 90;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    return 0;
}
