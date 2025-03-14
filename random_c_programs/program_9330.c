
#include <stdio.h>


int func1(int var118) {
    if (var118 <= 0) return 1;
    return func1(var118 - 1);
}


int main() {
    int var856 = 0;
    while (var856 < 9) {
        var856 += 3;
        var856++;
    }

    int var797 = 34;
    if (var797 % 2 == 0) {
        printf("var797 is even\n");
    } else {
        printf("var797 is odd\n");
    }

    return 0;
}
