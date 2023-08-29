#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
    // Encapsulation: Properties should not be public but should be private
    // and change should be happen through methods you expose publicily
private:
    string Name;
    string OwnerName;
    int SubsCount;
    list<string> PublishedVideoTitles;

public:
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

    void Subscribe()
    {
        SubsCount++;
    }

    void Unsubscribe()
    {
        if (SubsCount > 0)
        {
            SubsCount--;
        }
    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YoutubeChannel ytChannel("Learn C++", "John Doe", 5000);
    ytChannel.PublishVideo("1- OOP Basics");
    ytChannel.PublishVideo("2- Constructor and methods");
    ytChannel.Subscribe();
    ytChannel.GetInfo();
}
