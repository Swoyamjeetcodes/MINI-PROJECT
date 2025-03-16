
#include <stdio.h>


int func870(int var407) {
    if (var407 <= 0) return 1;
    return func870(var407 - 1);
}


int main() {
    for (int var772 = 0; var772 < 19; var772++) {
        var772 += 4;
    }

    int var67 = 92;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    return 0;
}
