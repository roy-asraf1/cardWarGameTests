# include "doctest.h"
# include "card.hpp"
# include "game.hpp"
# include "player.hpp"
# include <iostream>
# include <stdexcept>
# include <chrono>


//***************cards checks********************
TEST_CASE("inisilize card:"){
// 1. check if -> card val negative

// 2. check if -> card val < JOKER

// 3. check the constractor

// 4. check if card can be Reversed
    
}

//***************player checks********************
TEST_CASE("check cardesTaken"){
// 1. check -> card taken time

// 2. check -> the type of the function

// 3.check duplicates cards
    
}

TEST_CASE("size stack1"){
// 1. check if -> size stack1!= retutrn int

// 2. check if -> size stack1 > max

// 3. check if -> size stack1 is positive

}
TEST_CASE("size stack2"){
// 1. check if -> size stack2!= retutrn int

// 2. check if -> size stack2 > max

// 3. check if -> size stack2 is positive

}
TEST_CASE("if player name is string"){
// 1. check if -> player.name!=inctanceof(string) player 1

// 2. check also to player 2
}
TEST_CASE("inisilize player:"){
    // 1. check if -> p1 is instance of player

    // 2. check if -> p2 is instance of player
}
//***************game checks********************
TEST_CASE("check playAll"){
    // 1. check if -> printlog!= retutrn void
    CHECK(std::is_void<decltype(playAll())>::value);
        
}
TEST_CASE("check printLog"){
    // 1. check if -> printlog!= retutrn void
    CHECK(std::is_void<decltype(printLog())>::value);

}
TEST_CASE("check printStats"){
    // 1. check if -> winner!= retutrn void
   CHECK(std::is_void<decltype(printStats())>::value);

}
TEST_CASE("printWiner"){
    // 1. check if -> winner!= retutrn void
    CHECK(std::is_void<decltype(printWiner())>::value);

    // 2. check if -> winner=p1.name||p2.name
    

}
TEST_CASE("check playTurn"){
    // 1. check if playturn repeat to the same person
        
}
TEST_CASE("check Reversed cards"){
// 1. check if -> some are reversed in one cartridge and not in the other

// 2.check if card can be Reversed
}
TEST_CASE("4 cards of each type"){

}
TEST_CASE("ACE card is the smaller"){

}
TEST_CASE("KING is the bigger"){

}



TEST_CASE("2 player exacly"){

}
TEST_CASE("A tie between the opposite cards"){

}
TEST_CASE("HALF exacly"){

}


TEST_CASE("constructor player2"){

}


TEST_CASE("not shuffle"){

}
TEST_CASE("checkMaincardpile"){

}