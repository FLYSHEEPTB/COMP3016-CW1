#ifndef SDL_Game_Programming_Book_Layer_h
#define SDL_Game_Programming_Book_Layer_h

class Level;

class Layer
{
public:

    virtual ~Layer() {}
    
    virtual void render() = 0;
    virtual void update(Level* pLevel) = 0;
};


#endif
