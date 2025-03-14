
#include <stdio.h>


int func352(int var481) {
    if (var481 <= 0) return 1;
    return func352(var481 - 1);
}


int main() {
    for (int var39 = 0; var39 < 17; var39++) {
        var39 += 5;
    }

    int var809 = 13;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
