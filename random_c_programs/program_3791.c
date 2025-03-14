
#include <stdio.h>


int func411(int var100) {
    if (var100 <= 0) return 1;
    return func411(var100 - 1);
}


int main() {
    for (int var443 = 0; var443 < 16; var443++) {
        var443 += 4;
    }

    int var115 = 68;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}
