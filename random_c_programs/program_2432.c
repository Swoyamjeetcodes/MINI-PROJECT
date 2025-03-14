
#include <stdio.h>


int func249(int var620) {
    if (var620 <= 0) return 1;
    return func249(var620 - 1);
}


int main() {
    int var207 = 0;
    while (var207 < 5) {
        var207 += 3;
        var207++;
    }

    int var29 = 54;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
