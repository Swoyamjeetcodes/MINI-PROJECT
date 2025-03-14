
#include <stdio.h>


int func398(int var238) {
    if (var238 <= 0) return 1;
    return func398(var238 - 1);
}


int main() {
    for (int var446 = 0; var446 < 14; var446++) {
        var446 += 2;
    }

    int var621 = 41;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}
