
#include <stdio.h>


int func528(int var569) {
    if (var569 <= 0) return 1;
    return func528(var569 - 1);
}


int main() {
    for (int var163 = 0; var163 < 9; var163++) {
        var163 += 5;
    }

    int var473 = 66;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}
