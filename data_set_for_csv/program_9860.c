
#include <stdio.h>


int func428(int var970) {
    if (var970 <= 0) return 1;
    return func428(var970 - 1);
}


int main() {
    for (int var567 = 0; var567 < 18; var567++) {
        var567 += 4;
    }

    int var450 = 0;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    return 0;
}
