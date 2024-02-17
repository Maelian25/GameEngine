
#ifndef MOVES_H
#define MOVES_H

namespace Physics {

    class Moves {
    public:
        Moves();

        bool hitWall();
        int move();

    private:
        int positionCharacterX;
        int positionCharacterY;
    };

} // namespace Physics

#endif // MOVES_H
#pragma once

