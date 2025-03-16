
#include <stdio.h>


int func66(int var496) {
    if (var496 <= 0) return 1;
    return func66(var496 - 1);
}


int main() {
    int var474 = 0;
    while (var474 < 18) {
        var474 += 3;
        var474++;
    }

    int var772 = 30;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
