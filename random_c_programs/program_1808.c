
#include <stdio.h>


int func857(int var639) {
    if (var639 <= 0) return 1;
    return func857(var639 - 1);
}


int main() {
    for (int var609 = 0; var609 < 9; var609++) {
        var609 += 5;
    }

    int var26 = 51;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    return 0;
}
