#include <bits/stdc++.h>
using namespace std;
#define CHUNK = 1024;

int main()
{
    int number;
    char buffer[8];
    char originalString[120];
    FILE *file;
    char c;
    size_t nread;
    int i, j, x, *pointer;

    file = fopen("E:\\Rich It\\Important Software\\Other\\C Code\\data.bin", "rb");
    if(file){

        while (nread = fread(buffer, 1, sizeof(buffer), file)){
                for (int k = 0; k < 8; ++k) {
                    c = buffer[k];
                    pointer = &k;
                    printf("%p", &buffer);
                    printf("\n");
//                    printf("%c", c);
//                    if(c== EOF){
//                        break;
//                    } else if(( c >= 'A' && c<= 'Z') || (c>= 'a' && c<= 'z') || c==32){
//                        printf("%c", c);
//                    }
                }
        }
        if(ferror(file)){
            printf("Error!");
        }

    }
    fclose(file);
    return 0;
}
