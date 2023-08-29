#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
    // Encapsulation: Properties should not be public but should be private
    // and change should be happen through methods you expose publicily
private:
    string Name;
    int SubsCount;
    list<string> PublishedVideoTitles;

    // To share private attributes in derived class we use protected modifier
protected:
    string OwnerName;

public:
    // Constructor - must have same name as class
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubsCount = 0;
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

// Inheriting objects and methods from parent class to base class
class CookingYoutubeChannel : public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }
    // This method will not be available at the parent class
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipies.";
    }
};

int main()
{
    CookingYoutubeChannel ytChannel("Joe's Kitchen", "Joe");
    ytChannel.GetInfo();
    ytChannel.PublishVideo("Chock cake");
    ytChannel.Subscribe();
    ytChannel.Practice();
}
