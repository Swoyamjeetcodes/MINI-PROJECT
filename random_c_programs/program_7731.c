
#include <stdio.h>


int func386(int var482) {
    if (var482 <= 0) return 1;
    return func386(var482 - 1);
}


int main() {
    int var927 = 0;
    while (var927 < 16) {
        var927 += 5;
        var927++;
    }

    int var862 = 97;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
