
#include <stdio.h>


int func526(int var846) {
    if (var846 <= 0) return 1;
    return func526(var846 - 1);
}


int main() {
    for (int var689 = 0; var689 < 8; var689++) {
        var689 += 2;
    }

    int var122 = 9;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
