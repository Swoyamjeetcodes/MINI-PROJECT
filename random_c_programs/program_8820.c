
#include <stdio.h>


int func357(int var61) {
    if (var61 <= 0) return 1;
    return func357(var61 - 1);
}


int main() {
    int var880 = 0;
    while (var880 < 8) {
        var880 += 5;
        var880++;
    }

    int var190 = 25;
    if (var190 % 2 == 0) {
        printf("var190 is even\n");
    } else {
        printf("var190 is odd\n");
    }

    return 0;
}
