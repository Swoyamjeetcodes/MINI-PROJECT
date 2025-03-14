
#include <stdio.h>


int func483(int var139) {
    if (var139 <= 0) return 1;
    return func483(var139 - 1);
}


int main() {
    int var876 = 0;
    while (var876 < 6) {
        var876 += 5;
        var876++;
    }

    int var923 = 84;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}
