
#include <stdio.h>


int func155(int var35) {
    if (var35 <= 0) return 1;
    return func155(var35 - 1);
}


int main() {
    int var772 = 0;
    while (var772 < 18) {
        var772 += 2;
        var772++;
    }

    int var950 = 85;
    if (var950 % 2 == 0) {
        printf("var950 is even\n");
    } else {
        printf("var950 is odd\n");
    }

    return 0;
}
