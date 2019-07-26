#include <iostream>
#include <vector>
#include <map>
#include <string>

int main()
{
    // get the number of requests to the systems 
    int NumberOfRquests;
    std::cin >> NumberOfRquests;

    // init a vector to hold the responses with the size of requests since every request has a response
    std::vector<std::string> Responses(NumberOfRquests);

    // init a map to hold all the usernames and the extra number of them existing
    // ex: the count is 0 if there is only one user with that name in the systems
    // and the count if 1 if there are two users with that name in the system
    std::map<std::string, int> Usernames;

    // A Temp variable to store the name input by the user
    std::string TempInputUsername;
    // loop to get all the requests and process them
    // store the user name in a map and then,
    // store the resoponses in the responses vector
    for(int i = 0; i < NumberOfRquests; ++i)
    {
        std::cin >> TempInputUsername;
        // Check if there is already a key for the entered name in the Usernames map
        // (Check if that name was entered before)
        if(Usernames.count(TempInputUsername) > 0)
        {
            // if the name was entred before then add one to the extra count of that name
            // and return a response of that name + the new extra count of it
            ++Usernames[TempInputUsername];
            Responses[i] = TempInputUsername + std::to_string(Usernames[TempInputUsername]);
        }
        else
        {
            // if there is no such name yet then insert a new key that is the name with a value of 0
            // the extra count is 0 at the start since there are not more users with that name
            // then return "OK" as the respons
            Usernames[TempInputUsername] = 0;
            Responses[i] = "OK";
        }
        
    }

    // print the responses
    for(int i = 0; i < NumberOfRquests; ++i)
    {
        std::cout << Responses[i] << std::endl;
    }
    

    return 0;
}