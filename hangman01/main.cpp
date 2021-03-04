#include <iostream>
#include <string>

using namespace std;

string choose_word()
{
    return "dungbay";
}

string convert(string name)
{
     string Guessword = string (name.length(),'-');
     return Guessword;

}
void check(char Guess1, string original, char * GuessWord, int &badcount, int &dem)
{
    //kiem tra su ton tai
    int test=0;
    for(int i=0;i<original.length();i++)
    {
        if(original[i]==Guess1)
        {
            GuessWord[i]=Guess1;
            dem++;
            test ++;
        }
    }
       if(test!=0)
       {
           for(int i=0; i<original.length();i++)
            cout <<GuessWord[i];
       }
       else
       {
           badcount++;
           cout << "Ban da doan sai";
       }
}

int main()
{
    string name =choose_word();
    string Convert = convert(name);
    //doi tu xau thanh mang
    char Guess_word[1000];
    for(int i=0; i<Convert.length();i++)
    {
        Guess_word[i]=Convert[i];
    }
    // so lan doan sai
    int badcount=0;
    // dem so xuat hien phan tu da doan
    int dem=0;
    while(badcount<7)
    {
        char guess;
        cin >> guess;
        check(guess,name,Guess_word,badcount,dem);
        cout << endl;
        if(dem==name.size())
        {
            cout <<"YOU ARE WIN THE GAME";
            return 0;
        }
    }
    cout <<"YOU ARE LOSE";
    return 0;
}
