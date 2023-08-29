#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
    // Polymorphism: ability of an object to have multiple forms
    // you can have two or more objects inherits from the same base class
    // but different implementation or behaviour
private:
    string Name;
    int SubsCount;
    list<string> PublishedVideoTitles;

    // To share private properties in derived class we use protected modifier
protected:
    string OwnerName;
    int ContentQuality;

public:
    // Constructor - must have same name as class
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubsCount = 0;
        ContentQuality = 0;
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

    void CheckAnalytics()
    {
        if (ContentQuality < 5)
        {
            cout << Name << " has bad quality content." << endl;
        }
        else
        {
            cout << Name << " has good quality content." << endl;
        }
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
        cout << OwnerName << " is practicing cooking, learning new recipies." << endl;
        ContentQuality++;
    }
};

class SingersYoutubeChannel : public YoutubeChannel
{
public:
    SingersYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }
    // This method will not be available at the parent class
    void Practice()
    {
        cout << OwnerName << " is taking singing classes, learning new songs." << endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Joe's Kitchen", "Joe");
    cookingYtChannel.Practice();
    SingersYoutubeChannel singersYtChannel("John sings", "John");
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    // Pointer (Invoking method through pointers)
    // pointer of our base class to assign address of derived class
    YoutubeChannel *yt1 = &cookingYtChannel;
    YoutubeChannel *yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
}
