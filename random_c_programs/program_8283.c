
#include <stdio.h>


int func600(int var315) {
    if (var315 <= 0) return 1;
    return func600(var315 - 1);
}


int main() {
    for (int var234 = 0; var234 < 9; var234++) {
        var234 += 3;
    }

    int var143 = 25;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    return 0;
}
