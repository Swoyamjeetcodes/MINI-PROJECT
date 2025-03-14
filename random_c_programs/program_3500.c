
#include <stdio.h>


int func951(int var739) {
    if (var739 <= 0) return 1;
    return func951(var739 - 1);
}


int main() {
    int var765 = 0;
    while (var765 < 15) {
        var765 += 3;
        var765++;
    }

    int var862 = 45;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
