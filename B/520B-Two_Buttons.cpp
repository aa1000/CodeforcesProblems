#include <iostream>
#include <queue>
#include <utility>

int main()
{
    // Variables to hold n and m
    int InitialNumber, WantedNumber;
    // Get the input of n and m
    std::cin >> InitialNumber >> WantedNumber;
    // we do a level order tree search for the wanted number using a queue,
    // this tests all possible combinations of operations (2 in this case so it's a binary search tree) 
    // and returns the minimum depth if we found out end goal (InitailNumber == WantedNumber)
    std::queue<std::pair<int, int>> NumberDepthQueue;
    // insert the root into the queue
    NumberDepthQueue.push(std::make_pair(InitialNumber, 0));
    // An array to store all previously visited values
    bool VisitedBefore[100000] = {false};

    while(!NumberDepthQueue.empty())
    {
        // We loop over the queue searching for the wanted value adding to it with every iteration
        std::pair<int, int> TempNumberDepth = NumberDepthQueue.front();
        NumberDepthQueue.pop();
        // We don't want to go down the path of a previously visited value
        // because we should already know that it won't lead to the answer
        if(VisitedBefore[TempNumberDepth.first])
            continue;
        // Print the answer as soon as we reach it
        if(TempNumberDepth.first == WantedNumber)
        {
            std::cout << TempNumberDepth.second;
            break;
        }
        // We store any number we visited before in an array since we shouldn't visit the same number twice
        VisitedBefore[TempNumberDepth.first] = true;
        // Push the next two possible combinations into the queue
        // Only if it's above zero since we can't go anywhere from zero
        if(TempNumberDepth.first - 1 > 0)
            NumberDepthQueue.push(std::make_pair(TempNumberDepth.first - 1, TempNumberDepth.second + 1));
        // And only if it's below or equal to the WantedNumber times 2
        // since we know that we shouldn't be that high above the WantedNumber 
        if(TempNumberDepth.first <= WantedNumber * 2)
            NumberDepthQueue.push(std::make_pair(TempNumberDepth.first * 2, TempNumberDepth.second + 1));  
    }



    return 0;
}