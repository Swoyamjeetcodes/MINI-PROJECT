
#include <stdio.h>


int func577(int var602) {
    if (var602 <= 0) return 1;
    return func577(var602 - 1);
}


int main() {
    int var579 = 0;
    while (var579 < 15) {
        var579 += 4;
        var579++;
    }

    int var447 = 65;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    return 0;
}
