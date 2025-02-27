char* my_strrev(char* str){
    int len;
    for(len =0; str[len]; len++);

    char temp;
    int start = 0, end = len-1;
    while(start<end){
        temp = *(str + start);
        *(str + start) =  *(str + end);
        *(str + end) = temp;
        
        start++;
        end--;
    }
    return str;
}

void my_strrev1(char* p, int len){
    char temp;    
    char* q = p+len-1;
    while(p<q){
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}

void my_strrev2(char* p, char* q){
    char temp;
    while(p<q){
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}
