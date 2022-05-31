#include <iostream>

class R {
public:
    R(int r1, int r2) : r1(r1), r2(r2) {} //组合类构造函数

    void print();

    void print() const;

private:
    int r1, r2;
};

void R::print() {
    std::cout << r1 << ":" << r2 << std::endl;
}

void R::print() const {
    std::cout << r1 << ":" << r2 << std::endl;
}

int main() {
    R a(5, 4);
    a.print();
    const R b(20, 52);
    b.print();
    return 0;
}
