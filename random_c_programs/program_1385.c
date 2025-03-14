
#include <stdio.h>


int func784(int var361) {
    if (var361 <= 0) return 1;
    return func784(var361 - 1);
}


int main() {
    for (int var895 = 0; var895 < 13; var895++) {
        var895 += 1;
    }

    int var331 = 73;
    if (var331 % 2 == 0) {
        printf("var331 is even\n");
    } else {
        printf("var331 is odd\n");
    }

    return 0;
}
