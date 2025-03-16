
#include <stdio.h>


int func88(int var394) {
    if (var394 <= 0) return 1;
    return func88(var394 - 1);
}


int main() {
    for (int var48 = 0; var48 < 9; var48++) {
        var48 += 2;
    }

    int var29 = 94;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
