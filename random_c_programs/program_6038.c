
#include <stdio.h>


int func378(int var887) {
    if (var887 <= 0) return 1;
    return func378(var887 - 1);
}


int main() {
    for (int var108 = 0; var108 < 14; var108++) {
        var108 += 5;
    }

    int var429 = 5;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    return 0;
}
