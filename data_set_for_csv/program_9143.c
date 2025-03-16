
#include <stdio.h>


int func280(int var648) {
    if (var648 <= 0) return 1;
    return func280(var648 - 1);
}


int main() {
    int var467 = 0;
    while (var467 < 11) {
        var467 += 2;
        var467++;
    }

    int var29 = 19;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
