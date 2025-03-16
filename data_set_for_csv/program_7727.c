
#include <stdio.h>


int func320(int var681) {
    if (var681 <= 0) return 1;
    return func320(var681 - 1);
}

int func542(int var430) {
    if (var430 <= 0) return 1;
    return func542(var430 - 1);
}

int func235(int var358) {
    if (var358 <= 0) return 1;
    return func235(var358 - 1);
}


int main() {
    for (int var896 = 0; var896 < 9; var896++) {
        var896 += 2;
    }    for (int var658 = 0; var658 < 8; var658++) {
        var658 += 3;
    }

    int var97 = 9;
    if (var97 % 2 == 0) {
        printf("var97 is even\n");
    } else {
        printf("var97 is odd\n");
    }

    return 0;
}
