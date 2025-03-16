
#include <stdio.h>


int func563(int var502) {
    if (var502 <= 0) return 1;
    return func563(var502 - 1);
}


int main() {
    for (int var601 = 0; var601 < 8; var601++) {
        var601 += 5;
    }

    int var243 = 82;
    if (var243 % 2 == 0) {
        printf("var243 is even\n");
    } else {
        printf("var243 is odd\n");
    }

    return 0;
}
