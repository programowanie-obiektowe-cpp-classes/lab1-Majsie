test systemu sprawdzajacego //class Wektor2D {
private:
    double x;
    double y;

public:
    Wektor2D() : x(0.0), y(0.0) {}
    Wektor2D(double x, double y) : x(x), y(y) {}

    void setX(double nowyX) {
        x = nowyX;
    }

    double getX() const {
        return x;
    }

    void setY(double nowyY) {
        y = nowyY;
    }

    double getY() const {
        return y;
    }

    Wektor2D operator+(const Wektor2D& temp) const {
        return Wektor2D(x + temp.x, y + temp.y);
    }

    double operator*(const Wektor2D& temp) const {
        return x * temp.x + y * temp.y;
    }
};
