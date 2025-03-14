
#include <stdio.h>


int func495(int var879) {
    if (var879 <= 0) return 1;
    return func495(var879 - 1);
}


int main() {
    for (int var271 = 0; var271 < 14; var271++) {
        var271 += 5;
    }    int var632 = 0;
    while (var632 < 10) {
        var632 += 5;
        var632++;
    }    for (int var676 = 0; var676 < 14; var676++) {
        var676 += 3;
    }

    int var713 = 64;
    if (var713 % 2 == 0) {
        printf("var713 is even\n");
    } else {
        printf("var713 is odd\n");
    }

    return 0;
}
