#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include "Player.hpp"

namespace coup {
    class Player;
    class Game {
        private:
            int turn_player;
            vector <Player> _players ;
            int win;        
    
        public:
            Game();
            string turn();
            vector<string> players();
            string winner();
            ~Game();
    };
} 