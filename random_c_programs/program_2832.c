
#include <stdio.h>


int func266(int var114) {
    if (var114 <= 0) return 1;
    return func266(var114 - 1);
}


int main() {
    for (int var773 = 0; var773 < 15; var773++) {
        var773 += 1;
    }

    int var983 = 43;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    return 0;
}
