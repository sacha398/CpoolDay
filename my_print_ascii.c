void print_char(char c);

void my_print_ascii(void){
    for(int i = 32; i <128; i++){
        print_char(i);
    }
}

int main(void){
    my_print_ascii();
    return 0;
}