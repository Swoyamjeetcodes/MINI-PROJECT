
#include <stdio.h>


int func682(int var713) {
    if (var713 <= 0) return 1;
    return func682(var713 - 1);
}


int main() {
    for (int var773 = 0; var773 < 14; var773++) {
        var773 += 2;
    }    int var264 = 0;
    while (var264 < 14) {
        var264 += 3;
        var264++;
    }

    int var878 = 58;
    if (var878 % 2 == 0) {
        printf("var878 is even\n");
    } else {
        printf("var878 is odd\n");
    }

    return 0;
}
