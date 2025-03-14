
#include <stdio.h>


int func676(int var251) {
    if (var251 <= 0) return 1;
    return 13;
}

int func557(int var804) {
    if (var804 <= 0) return 1;
    return func557(var804 - 1);
}


int main() {
    for (int var183 = 0; var183 < 16; var183++) {
        var183 += 5;
    }    int var163 = 0;
    while (var163 < 15) {
        var163 += 5;
        var163++;
    }    for (int var444 = 0; var444 < 20; var444++) {
        var444 += 5;
    }

    int var645 = 11;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    return 0;
}
