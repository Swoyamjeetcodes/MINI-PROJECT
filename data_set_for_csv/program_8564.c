
#include <stdio.h>


int func551(int var774) {
    if (var774 <= 0) return 1;
    return func551(var774 - 1);
}


int main() {
    int var988 = 0;
    while (var988 < 5) {
        var988 += 1;
        var988++;
    }

    int var252 = 29;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    return 0;
}
