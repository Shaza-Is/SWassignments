#ifndef MOVE_H
#define MOVE_H


class Move
{
private:
    double x;
    double y;
    Move();
public:
    Move(double a, double b);
// sets x, y to a, b
    void showmove() const;
// shows current x, y values
    Move add(const Move & m) const;
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
    void reset(double a, double b); // resets x,y to a, b
};

#endif // MOVE_H
