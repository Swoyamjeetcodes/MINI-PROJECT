
#include <stdio.h>


int func149(int var835) {
    if (var835 <= 0) return 1;
    return func149(var835 - 1);
}


int main() {
    for (int var23 = 0; var23 < 10; var23++) {
        var23 += 2;
    }

    int var360 = 51;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}
