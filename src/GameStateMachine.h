#ifndef __SDL_Game_Programming_Book__GameStateMachine__
#define __SDL_Game_Programming_Book__GameStateMachine__

#include <vector>
#include "GameState.h"

class GameStateMachine
{
public:
    
    GameStateMachine() {}
    ~GameStateMachine() {}
    
    void update();
    void render();
    
    void pushState(GameState* pState);
    void changeState(GameState* pState);
    void popState();
    
    void clean();

	std::vector<GameState*>& getGameStates() { return m_gameStates; }
    
private:
    std::vector<GameState*> m_gameStates;
};

#endif /* defined(__SDL_Game_Programming_Book__GameStateMachine__) */
