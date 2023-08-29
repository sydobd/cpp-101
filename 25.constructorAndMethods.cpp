#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubsCount;
    list<string> PublishedVideoTitles;

    // Constructor - must have same name as class
    YoutubeChannel(string name, string ownerName, int subsCount)
    {
        Name = name;
        OwnerName = ownerName;
        SubsCount = subsCount;
    }

    // Method
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubsCount: " << SubsCount << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
    YoutubeChannel ytChannel("Learn C++", "John Doe", 5000);
    ytChannel.PublishedVideoTitles.push_back("1- OOP Basics");
    ytChannel.PublishedVideoTitles.push_back("2- Constructor and methods");

    ytChannel.GetInfo();
}
