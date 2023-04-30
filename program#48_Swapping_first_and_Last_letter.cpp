#include<iostream>
#include<cstring>

char swap1stLast(char word[])
{
    int size = strlen(word+1);
    char first,last;
    for(int i = 0; i < strlen(word); ++i)
    {
        if(i == 0)
        {
            first = word[i];
        }else if(i == size)
        {
            last = word[i];
        }
    }

    for(int j = 0; j < strlen(word); ++j)
        {
            if(j == 0)
            {
                word[j] = last;
            }else if(j == size)
            {
                word[j] = first;
            }
         
        }
    std::cout  << word;
    
}
int main()
{
    char words[15];
    std::cout << "Enter a Word: ";
    std::cin.getline(words,15);
    swap1stLast(words);

    return 0;
}