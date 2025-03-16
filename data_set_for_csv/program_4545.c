
#include <stdio.h>


int func895(int var609) {
    if (var609 <= 0) return 1;
    return func895(var609 - 1);
}


int main() {
    for (int var674 = 0; var674 < 17; var674++) {
        var674 += 1;
    }

    int var753 = 94;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    return 0;
}
