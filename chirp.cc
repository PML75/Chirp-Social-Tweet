#include "chirp.h"
#include <string>

using namespace std;

void Chirp::SetMessage(const string &message)
{
  tMessage = message;
}
string Chirp::GetMessage() const
{
  return tMessage;
}
int Chirp::GetLikes()
{
  return tLike;
}
void Chirp::AddLike() //increment by 1
{
  tLike += 1;
}
void Chirp::AddLike(int aLike) //input count to increment
{
  tLike += aLike;
}
