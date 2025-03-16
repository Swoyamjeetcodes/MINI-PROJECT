
#include <stdio.h>


int func240(int var29) {
    if (var29 <= 0) return 1;
    return func240(var29 - 1);
}


int main() {
    for (int var139 = 0; var139 < 12; var139++) {
        var139 += 5;
    }

    int var320 = 16;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    return 0;
}
