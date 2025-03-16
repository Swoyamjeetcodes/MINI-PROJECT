
#include <stdio.h>


int func969(int var727) {
    if (var727 <= 0) return 1;
    return func969(var727 - 1);
}


int main() {
    for (int var328 = 0; var328 < 9; var328++) {
        var328 += 2;
    }

    int var952 = 83;
    if (var952 % 2 == 0) {
        printf("var952 is even\n");
    } else {
        printf("var952 is odd\n");
    }

    return 0;
}
