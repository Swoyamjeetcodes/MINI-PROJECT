
#include <stdio.h>


int func137(int var679) {
    if (var679 <= 0) return 1;
    return func137(var679 - 1);
}


int main() {
    int var171 = 0;
    while (var171 < 15) {
        var171 += 1;
        var171++;
    }

    int var895 = 52;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    return 0;
}
