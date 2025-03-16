
#include <stdio.h>


int func903(int var112) {
    if (var112 <= 0) return 1;
    return func903(var112 - 1);
}


int main() {
    for (int var56 = 0; var56 < 20; var56++) {
        var56 += 1;
    }

    int var267 = 25;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    return 0;
}
