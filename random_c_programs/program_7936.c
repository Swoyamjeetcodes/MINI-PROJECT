
#include <stdio.h>


int func162(int var686) {
    if (var686 <= 0) return 1;
    return func162(var686 - 1);
}


int main() {
    for (int var208 = 0; var208 < 7; var208++) {
        var208 += 1;
    }

    int var873 = 74;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
