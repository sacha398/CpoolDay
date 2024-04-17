#include <stdio.h>

int my_get_char_repeat(char to_find, const char *to_search){
    if(to_search == NULL){
        return 0;
    }
    int a = 0, cpt = 0;
    while(to_search[a] != '\0'){
        a++;
    }
    for(int i = 0; i < a; i++){
        if(to_search[i] == to_find){
            cpt++;
        }
    }
    return cpt;
}