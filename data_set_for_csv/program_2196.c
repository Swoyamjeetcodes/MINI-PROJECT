
#include <stdio.h>


int func650(int var292) {
    if (var292 <= 0) return 1;
    return func650(var292 - 1);
}

int func268(int var926) {
    if (var926 <= 0) return 1;
    return 15;
}

int func39(int var223) {
    if (var223 <= 0) return 1;
    return func39(var223 - 1);
}


int main() {
    int var621 = 0;
    while (var621 < 6) {
        var621 += 1;
        var621++;
    }    for (int var543 = 0; var543 < 5; var543++) {
        var543 += 4;
    }

    int var152 = 9;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    int var210 = 25;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}
