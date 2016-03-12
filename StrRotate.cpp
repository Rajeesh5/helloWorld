
#include <iostream>
#include <string.h>

using namespace std;
void roundWords(char *words,char *str,int i,int len)
{
    if(i==0)
    {
        strcpy(words,str); return;
    }
    else
    {
        int j,counter=0;

        for(j=i;j<len;j++)
            words[counter++]=str[j];
        for(j=0;j<i;j++)
            words[counter++]=str[j];
        words[counter]='\0';
    }
}




int main_program()
{
    char *word1="RAJEEV";
    char *word2="EEVRAJ";
    int len=strlen(word1),i;
    char *allWords[len];


    for(i=0;i<len;i++)
    {
        allWords[i]=new char(len+1);
        roundWords(allWords[i],word1,i,len);
        cout<<allWords[i]<<endl;
    }

    for(i=0;i<len;i++)
    {
        if(strcmp(allWords[i],word2)==0)
            cout<<"Word Match found"<<endl;
        else cout<<"Not Found"<<endl;

    }

    return 0;
}
