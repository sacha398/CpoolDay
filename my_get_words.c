void print_char(char c);

void my_get_words(char *sentance){
    int cmp = 0;
    while(sentance[cmp] != '\0') cmp++;
    for(int i = 0; i < cmp; i++){
        if(sentance[i] == '\t' || sentance[i] == '\n' || sentance[i] == ' '){
            print_char('\n');
            sentance[i] = NULL;
        }
        print_char(sentance[i]);
        
    }
}