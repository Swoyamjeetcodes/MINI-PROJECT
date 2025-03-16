
#include <stdio.h>


int func413(int var671) {
    if (var671 <= 0) return 1;
    return func413(var671 - 1);
}


int main() {
    for (int var54 = 0; var54 < 12; var54++) {
        var54 += 2;
    }

    int var774 = 9;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    return 0;
}
