
#include <stdio.h>


int func770(int var951) {
    if (var951 <= 0) return 1;
    return func770(var951 - 1);
}


int main() {
    for (int var183 = 0; var183 < 9; var183++) {
        var183 += 1;
    }

    int var122 = 15;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
