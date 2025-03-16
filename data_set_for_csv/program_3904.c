
#include <stdio.h>


int func442(int var540) {
    if (var540 <= 0) return 1;
    return func442(var540 - 1);
}


int main() {
    for (int var649 = 0; var649 < 6; var649++) {
        var649 += 3;
    }

    int var893 = 87;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    return 0;
}
