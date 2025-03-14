
#include <stdio.h>


int func489(int var482) {
    if (var482 <= 0) return 1;
    return func489(var482 - 1);
}


int main() {
    for (int var522 = 0; var522 < 19; var522++) {
        var522 += 2;
    }

    int var63 = 81;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    return 0;
}
