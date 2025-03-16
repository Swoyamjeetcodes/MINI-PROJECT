
#include <stdio.h>


int func159(int var885) {
    if (var885 <= 0) return 1;
    return 63;
}

int func760(int var989) {
    if (var989 <= 0) return 1;
    return func760(var989 - 1);
}


int main() {
    for (int var712 = 0; var712 < 16; var712++) {
        var712 += 2;
    }    for (int var852 = 0; var852 < 16; var852++) {
        var852 += 5;
    }

    int var415 = 16;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
