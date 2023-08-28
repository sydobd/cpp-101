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
};

int main()
{
    YoutubeChannel ytChannel;
    ytChannel.Name = "abc";
    ytChannel.OwnerName = "def";
    ytChannel.SubsCount = 1000;
    ytChannel.PublishedVideoTitles = {"Video 1", "Video 2", "Video 3"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubsCount: " << ytChannel.SubsCount << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }
}
