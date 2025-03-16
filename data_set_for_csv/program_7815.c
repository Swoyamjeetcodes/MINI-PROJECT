
#include <stdio.h>


int func699(int var816) {
    if (var816 <= 0) return 1;
    return func699(var816 - 1);
}


int main() {
    int var475 = 0;
    while (var475 < 5) {
        var475 += 5;
        var475++;
    }

    int var922 = 46;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    return 0;
}
