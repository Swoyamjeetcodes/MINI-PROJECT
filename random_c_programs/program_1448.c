
#include <stdio.h>


int func393(int var414) {
    if (var414 <= 0) return 1;
    return func393(var414 - 1);
}


int main() {
    for (int var281 = 0; var281 < 20; var281++) {
        var281 += 4;
    }

    int var517 = 67;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
