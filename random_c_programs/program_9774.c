
#include <stdio.h>


int func162(int var298) {
    if (var298 <= 0) return 1;
    return func162(var298 - 1);
}


int main() {
    for (int var927 = 0; var927 < 20; var927++) {
        var927 += 2;
    }

    int var198 = 54;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    return 0;
}
