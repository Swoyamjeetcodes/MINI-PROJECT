
#include <stdio.h>


int func462(int var236) {
    if (var236 <= 0) return 1;
    return func462(var236 - 1);
}


int main() {
    int var797 = 0;
    while (var797 < 16) {
        var797 += 1;
        var797++;
    }

    int var248 = 91;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
