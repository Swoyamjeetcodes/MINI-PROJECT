
#include <stdio.h>


int func242(int var608) {
    if (var608 <= 0) return 1;
    return func242(var608 - 1);
}


int main() {
    int var289 = 0;
    while (var289 < 17) {
        var289 += 2;
        var289++;
    }

    int var922 = 70;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    return 0;
}
