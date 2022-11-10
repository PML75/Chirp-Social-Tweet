#include <string>
#include <iomanip>

using namespace std;

class Chirp
{
  public:
    Chirp() : tMessage(""), tLike(0) {}
    Chirp(const string &message) : tMessage(message), tLike(0){}
    Chirp(const string &message, int likes) : tMessage(message), tLike(likes) {}
    void SetMessage(const string &message);
    string GetMessage() const;
    int GetLikes();
    void AddLike(); //increment by 1
    void AddLike(int aLike); //input like count increment
  
  private: 
    string tMessage;
    int tLike;
};
