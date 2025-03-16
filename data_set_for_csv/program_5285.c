
#include <stdio.h>


int func969(int var29) {
    if (var29 <= 0) return 1;
    return func969(var29 - 1);
}


int main() {
    for (int var445 = 0; var445 < 15; var445++) {
        var445 += 5;
    }

    int var360 = 68;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}
