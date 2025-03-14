
#include <stdio.h>


int func899(int var706) {
    if (var706 <= 0) return 1;
    return func899(var706 - 1);
}


int main() {
    int var770 = 0;
    while (var770 < 17) {
        var770 += 4;
        var770++;
    }

    int var462 = 6;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    return 0;
}
