
#include <stdio.h>


int func201(int var756) {
    if (var756 <= 0) return 1;
    return func201(var756 - 1);
}


int main() {
    for (int var23 = 0; var23 < 10; var23++) {
        var23 += 5;
    }

    int var661 = 80;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    return 0;
}
