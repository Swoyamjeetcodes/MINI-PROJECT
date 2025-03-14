
#include <stdio.h>


int func357(int var345) {
    if (var345 <= 0) return 1;
    return func357(var345 - 1);
}


int main() {
    for (int var162 = 0; var162 < 16; var162++) {
        var162 += 3;
    }

    int var475 = 12;
    if (var475 % 2 == 0) {
        printf("var475 is even\n");
    } else {
        printf("var475 is odd\n");
    }

    return 0;
}
