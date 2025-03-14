
#include <stdio.h>


int func141(int var679) {
    if (var679 <= 0) return 1;
    return func141(var679 - 1);
}


int main() {
    for (int var656 = 0; var656 < 15; var656++) {
        var656 += 5;
    }

    int var370 = 60;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    return 0;
}
