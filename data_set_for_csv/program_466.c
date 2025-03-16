
#include <stdio.h>


int func233(int var602) {
    if (var602 <= 0) return 1;
    return func233(var602 - 1);
}


int main() {
    int var349 = 0;
    while (var349 < 13) {
        var349 += 4;
        var349++;
    }

    int var824 = 77;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
