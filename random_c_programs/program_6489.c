
#include <stdio.h>


int func553(int var784) {
    if (var784 <= 0) return 1;
    return func553(var784 - 1);
}


int main() {
    for (int var65 = 0; var65 < 11; var65++) {
        var65 += 4;
    }

    int var426 = 4;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
