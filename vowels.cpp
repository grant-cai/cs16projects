#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int countVowels(string s)
{
    int len = s.length();
    if(s.empty()){
        return 0;
    }
    else
    {
        return (toupper(s[0]) == 'A' || toupper(s[0]) == 'E' || toupper(s[0]) == 'I' || toupper(s[0]) == 'O' || toupper(s[0]) == 'U') + countVowels(s.substr(1, len - 1));
    }
}

int main()
{
    string et = "E.T. phone home";
    string shining = "All work and no play makes Jack a dull boy";
    string oz = "Toto, I've a feeling we're not in Kansas anymore";
    string podBayDoors = "Open the pod bay doors, please, HAL";

    cout << "There are " << countVowels(et) << " vowels in " << '\"' << et << '\"' << endl;
    cout << "There are " << countVowels(shining) << " vowels in " << '\"' << shining << '\"' << endl;
    cout << "There are " << countVowels(oz) << " vowels in " << '\"' << oz << '\"' << endl;
    cout << "There are " << countVowels(podBayDoors) << " vowels in " << '\"' << podBayDoors << '\"' << endl;

}