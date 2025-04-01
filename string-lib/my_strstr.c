char* my_strstr(char* main, char* sub){

        int i = 0, j = 0;
        while(main[i]){
                if(main[i] == sub[0]){

                        while(sub[j]){

                                if(main[i]!=sub[j])
                                {
                                        j=0;
                                        break;
                                }
                                i++;
                                j++;
                        }
                        if(sub[j] == '\0'){
                                return main+i;
                        }
                }
                i++;
        }
        return NULL;
}
