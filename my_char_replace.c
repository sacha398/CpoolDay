void print_char(char c);

char *my_replace_char(char *origin, char toFind, char toReplace){
    int j = 0;
    while(origin[j] != '\0'){
        j++;
    }
    for (int i = 0; i < j; i++)
    {
       if(origin[i] == toFind){
            origin[i] = toReplace;
       }
    }

    return origin;

}
