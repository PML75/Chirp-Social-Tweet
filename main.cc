#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "chirp.h"

int main() {
  std::string input;
  const std::string prompt =
      "\nYou can \"chirp\" a new message to Chirper, "
      "\"like\" an existing chirp, or \"exit\". What do you want to do? ";
  std::cout << prompt;
  std::getline(std::cin, input);

  vector<Chirp> chirps;

  while (input != "exit") 
  {
    if (input == "chirp") 
    {
      std::string user_message;
      std::cout << "What's your message? ";
      std::getline(std::cin, user_message);
    

      //Chirp newChirp(user_message, 0);
      chirps.push_back(Chirp(user_message,0));
      
    } else if (input == "like") {
      std::string user_index_string;
      std::cout << "Which index do you want to like? ";
      std::getline(std::cin, user_index_string);
      int user_index = std::stoi(user_index_string);
      

      chirps.at(user_index-1).AddLike();
      
    }
    int count = 0;
    //Chirper has 2 chirps:
    cout << "Chirper has " << chirps.size() <<" chirps: " << endl;

    for (Chirp c : chirps)
    {
      cout << ++count << ". " << c.GetMessage() << " (" << c.GetLikes() << " likes)" << endl;
    }


    
    std::cout << prompt;
    std::getline(std::cin, input);
  }
  cout << "Goodbye!";
  return 0;
}
