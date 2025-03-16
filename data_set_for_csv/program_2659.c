
#include <stdio.h>


int func144(int var795) {
    if (var795 <= 0) return 1;
    return func144(var795 - 1);
}


int main() {
    int var341 = 0;
    while (var341 < 18) {
        var341 += 5;
        var341++;
    }

    int var674 = 85;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
