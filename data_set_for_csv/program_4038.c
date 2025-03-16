
#include <stdio.h>


int func71(int var679) {
    if (var679 <= 0) return 1;
    return func71(var679 - 1);
}


int main() {
    int var300 = 0;
    while (var300 < 6) {
        var300 += 5;
        var300++;
    }

    int var862 = 81;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
