
#include <stdio.h>


int func153(int var869) {
    if (var869 <= 0) return 1;
    return func153(var869 - 1);
}


int main() {
    int var735 = 0;
    while (var735 < 15) {
        var735 += 2;
        var735++;
    }

    int var824 = 10;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
