//Ambassador
#pragma once
#include <string>
#include "Player.hpp"
using namespace std;

namespace coup{
    class Ambassador : public Player
    {
    private:
      
    public:
            Ambassador(const Game game,const string name);
            void transfer(Player player1, Player player2);
            void PreventSteel(Player player);
            ~Ambassador();
    };
    
    
    


}