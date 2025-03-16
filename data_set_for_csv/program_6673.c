
#include <stdio.h>


int func2(int var587) {
    if (var587 <= 0) return 1;
    return func2(var587 - 1);
}


int main() {
    for (int var541 = 0; var541 < 11; var541++) {
        var541 += 1;
    }

    int var147 = 33;
    if (var147 % 2 == 0) {
        printf("var147 is even\n");
    } else {
        printf("var147 is odd\n");
    }

    return 0;
}
