
#include <stdio.h>


int func372(int var447) {
    if (var447 <= 0) return 1;
    return func372(var447 - 1);
}


int main() {
    int var2 = 0;
    while (var2 < 10) {
        var2 += 1;
        var2++;
    }

    int var278 = 74;
    if (var278 % 2 == 0) {
        printf("var278 is even\n");
    } else {
        printf("var278 is odd\n");
    }

    return 0;
}
