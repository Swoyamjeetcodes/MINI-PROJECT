
#include <stdio.h>


int func331(int var787) {
    if (var787 <= 0) return 1;
    return func331(var787 - 1);
}


int main() {
    int var923 = 0;
    while (var923 < 7) {
        var923 += 4;
        var923++;
    }

    int var560 = 89;
    if (var560 % 2 == 0) {
        printf("var560 is even\n");
    } else {
        printf("var560 is odd\n");
    }

    return 0;
}
