
#include <stdio.h>


int func686(int var924) {
    if (var924 <= 0) return 1;
    return func686(var924 - 1);
}


int main() {
    for (int var269 = 0; var269 < 14; var269++) {
        var269 += 1;
    }

    int var646 = 35;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
