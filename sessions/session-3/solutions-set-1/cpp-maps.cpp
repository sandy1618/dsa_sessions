#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <iostream>
#include <map>
#include <cassert>
using namespace std; 

int main (int argc, char* argv[], char* envp[])
{
    std::map<std::string, int> Map;
    long long int Q = 0; 
    std::cin >> Q;

    while(Q--)
    {
        std::string name;
        int mark = 0;
        int query = 0;

        std::cin >> query >> name ;
        
        assert((query >= 1) && (query <= 3));

        switch(query)
        {
            case 1: std::cin >> mark;
                    Map[name] += mark;
                    break;
            case 2: Map.erase(name);            
                    break;
            case 3: std::cout << Map[name] << std::endl;
                    break;
        }
    }
    return 0;
}

