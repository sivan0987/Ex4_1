#pragma once
#include <string>
using namespace std;
#include <array>
#include "Game.hpp"

namespace coup {
   class Game;
   class Player {
        private:
         string _name;
         int _numCoins;
         //Game g;
           
        public:
            Player(const Game &g, const string _name);
            void income();
            void foreign_aid();
            void  coup(const Player player);
            string role  ();
            int coins();
            ~Player();
   };
}