
#include <stdio.h>


int func257(int var970) {
    if (var970 <= 0) return 1;
    return func257(var970 - 1);
}


int main() {
    for (int var39 = 0; var39 < 20; var39++) {
        var39 += 1;
    }

    int var386 = 52;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    return 0;
}
