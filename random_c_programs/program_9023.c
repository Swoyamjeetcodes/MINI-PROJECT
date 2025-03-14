
#include <stdio.h>


int func239(int var606) {
    if (var606 <= 0) return 1;
    return func239(var606 - 1);
}


int main() {
    for (int var243 = 0; var243 < 11; var243++) {
        var243 += 3;
    }

    int var977 = 64;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    return 0;
}
