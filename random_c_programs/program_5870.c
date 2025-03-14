
#include <stdio.h>


int func358(int var569) {
    if (var569 <= 0) return 1;
    return func358(var569 - 1);
}


int main() {
    for (int var289 = 0; var289 < 10; var289++) {
        var289 += 4;
    }

    int var117 = 3;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
