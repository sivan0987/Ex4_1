
#pragma once
//Captain
#include <string>
#include "Player.hpp"
using namespace std;

namespace coup{
    class Captain : public Player
    {
    private:
   
      
        public:
           Captain(Game game,string name);
           void steal(Player player);
           void block(Player player);
           ~Captain();
    };
    
    
    


}