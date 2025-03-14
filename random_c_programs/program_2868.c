
#include <stdio.h>


int func551(int var215) {
    if (var215 <= 0) return 1;
    return func551(var215 - 1);
}


int main() {
    for (int var267 = 0; var267 < 16; var267++) {
        var267 += 1;
    }

    int var9 = 59;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    return 0;
}
