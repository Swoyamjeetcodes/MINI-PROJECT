
#include <stdio.h>


int func718(int var824) {
    if (var824 <= 0) return 1;
    return func718(var824 - 1);
}


int main() {
    for (int var970 = 0; var970 < 12; var970++) {
        var970 += 4;
    }

    int var747 = 67;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    return 0;
}
