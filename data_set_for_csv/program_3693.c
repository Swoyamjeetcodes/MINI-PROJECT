
#include <stdio.h>


int func164(int var894) {
    if (var894 <= 0) return 1;
    return func164(var894 - 1);
}


int main() {
    for (int var585 = 0; var585 < 13; var585++) {
        var585 += 2;
    }

    int var587 = 19;
    if (var587 % 2 == 0) {
        printf("var587 is even\n");
    } else {
        printf("var587 is odd\n");
    }

    return 0;
}
