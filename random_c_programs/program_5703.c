
#include <stdio.h>


int func375(int var204) {
    if (var204 <= 0) return 1;
    return func375(var204 - 1);
}


int main() {
    for (int var306 = 0; var306 < 8; var306++) {
        var306 += 2;
    }

    int var84 = 46;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
